import 'package:clangapp/native_add.dart';
import 'package:flutter/material.dart';
void main() => runApp(App());

class App extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Main(),
    );
  }
}

class Main extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Text('1 + 2 == ${nativeAdd(1, 2)}'),
      ),
    );
  }
}
