#ifndef __PARSER_H
#define __PARSER_H

class Parser {
  bool _isGood;
public: 
  Parser();
  ~Parser();
  void run(const char* fn = 0);
  void success() { _isGood = true;} 
  bool isGood() const { return _isGood;}
};

#endif
