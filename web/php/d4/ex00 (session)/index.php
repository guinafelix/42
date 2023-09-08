<?php
  session_start();
  if ($_GET['login'] && $_GET['passwd'] && $_GET['submit'] && $_GET['submit'] === "OK") {
    $_SESSION['login'] = $_GET['login'];
    $_SESSION['passwd'] = $_GET['passwd'];
  }

?>
<html><body>
  <form action="action.php" method="GET">
      Username:<input name="login" id="login" value="<?php echo $_SESSION['login'];?>" type="text">
      <br>
      Password:<input type="password" name="passwd" id="passwd" value="<?php echo $_SESSION['passwd'];?>">
      <input type="submit" value="OK" name="submit">
  </form>
</body></html>