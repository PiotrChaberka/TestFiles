def convert_date(dateA):
    # Brute force check który sprawdza po kolei literki. Proste ale idioto-odporne rozwiązanie
    if dateA[0] == 'A':
        year = "200" + dateA[1:]
    elif dateA[0] == 'B':
        year = "201" + dateA[1:]
    elif dateA[0] == 'C':
        year = "202" + dateA[1:]
    elif dateA[0].isdigit():
        year = "199" + dateA
    else:
        # error code żeby wyglądało fancy
        return "Error status: 422 (zły format)"
    
    # Dodanie - w odpowiednich miejscach żeby jakoś wyglądało
    year_with_dash = year[:4] + '-' + year[4:6] + '-' + year[6:]

    # return Zformatowana data
    return year_with_dash

# Test case'y
print(convert_date("C50301"))   # 2025-03-01
print(convert_date("A71213"))   # 2007-12-13
print(convert_date("B51231"))   # 2015-12-31
print(convert_date("911231"))   # 1991-12-31
print(convert_date("B00707"))   # 2010-07-07