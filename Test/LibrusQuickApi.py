import requests

# URL do logowania
login_url = "https://portal.librus.pl/rodzina/synergia/loguj"

# Tworzenie sesji
session = requests.Session()

# Pobranie strony logowania
login_page = session.get(login_url)

# Dane logowania
payload = {
    'login': '99',  # wprowadź swój login
    'password': 'P',  # wprowadź swoje hasło
}

# Wysłanie POST-a z danymi logowania
response = session.post(login_url, data=payload, allow_redirects=True)

# Sprawdzenie, czy udało się zalogować
if response.url == "https://synergia.librus.pl/uczen/index":
    print("Zalogowano pomyślnie!")

    # Próba otwarcia strony z parametrem client_id
    url_to_check = "https://synergia.librus.pl/authorization?client_id=xyz"  # Wprowadź rzeczywisty URL z parametrem client_id
    response = session.get(url_to_check)

    # Sprawdzenie, czy zwraca błąd 403
    if response.status_code == 403:
        print("Błąd 403: Brak dostępu do zasobu.")
    else:
        print(f"Status odpowiedzi: {response.status_code}. Dostęp prawdopodobnie jest dozwolony.")
else:
    print("Błąd logowania")
