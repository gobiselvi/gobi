int main(){

    string surname;
    int g;
    while (true) {
        surname = "";
        cout << "Enter surname (RETURN to quit): ";
        g = cin.get();
        if (g == '\n') {
            break;
        }
        cin >> surname;
        cout << surname << endl;
    }
    return 0;   
}
