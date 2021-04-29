public class Users {
    public string firstName;
    public string lastName;

    public void setFirstName(String firstName) {
        this.firstName = firstName.toUpperCase();
    }

    public void setLastName(String lastName) {
    this.lastName = lastName.toUpperCase();
    }

    public String getFirstName() {
        return firstName;
    }

        public String getLastName() {
        return lastName;
    }
}