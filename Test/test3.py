def wysokosc_piramidy(liczba_blokow):
    wysokosc = 0  # wysokość
    bloki_w_warstwie = 1  # lcizba bloków w warstie (dałem wartość 1)
    bloki_pozostale = liczba_blokow  # liczba bloków pozostałych do użyica

    while bloki_pozostale >= bloki_w_warstwie:
        wysokosc += 1  # zwiększamy wysokość piramidy
        bloki_pozostale -= bloki_w_warstwie  # odejmujemy 
        bloki_w_warstwie += 1  # zwiększamy liczbe bloków w następnej warstwie

    return wysokosc


print(wysokosc_piramidy(6))