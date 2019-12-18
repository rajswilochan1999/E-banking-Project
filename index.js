firebase.auth().onAuthStateChanged(function(user) {
    if (user) {
        window.open('our_services.html');
      // User is signed in.
    } else {
      // No user is signed in.
      window.alert("Unable to log in")
    }
  });
function login()
{
    var userEmail=document.getElementById("email_field").value;
    var userPassword=document.getElementById("password_field").value;
    var auth=firebase.auth();
    window.alert(userEmail);
    firebase.auth().signInWithEmailAndPassword(userEmail, userPassword).catch(function(error) {
        // Handle Errors here.
        var errorCode = error.code;
        var errorMessage = error.message;
        window.alert("Error:"+errorMessage);
        // ...
      });
    
}