��    -      �  =   �      �  C   �  9   %  o   _  B   �  m     ?   �  \   �  ;     P   Y  [   �       @   	  N   J  J   �  D   �  d   )  �   �  :   )	     d	     r	     {	  0   �	     �	  5   �	  	   
     
  )   "
  "   L
  1   o
  +   �
  A   �
  ;        K  /   [  7   �  3   �  :   �  ;   2  $   n     �     �     �     �  2   �  �     G     =   L  h   �  =   �  c   1  :   �  N   �  4     F   T  L   �     �  9   �  B   %  ?   h  4   �  E   �  B   #  *   f     �     �     �  /   �     �  4   	     >     Q     k     �  (   �  a   �  ?   6  I   v     �  ,   �  /   �  ,   +  /   X  /   �     �     �     �            +   )             #                                    $         (                 +                         *          	                &      !   '   -   ,                  
                  "          %      )            --byte-subst=FORMATSTRING   substitution for unconvertible bytes
   --help                      display this help and exit
   --unicode-subst=FORMATSTRING
                              substitution for unconvertible Unicode characters
   --version                   output version information and exit
   --widechar-subst=FORMATSTRING
                              substitution for unconvertible wide characters
   -c                          discard unconvertible characters
   -f ENCODING, --from-code=ENCODING
                              the encoding of the input
   -l, --list                  list the supported encodings
   -s, --silent                suppress error messages about conversion problems
   -t ENCODING, --to-code=ENCODING
                              the encoding of the output
 %s %s argument: A format directive with a size is not allowed here. %s argument: A format directive with a variable precision is not allowed here. %s argument: A format directive with a variable width is not allowed here. %s argument: The character '%c' is not a valid conversion specifier. %s argument: The character that terminates the format directive is not a valid conversion specifier. %s argument: The format string consumes more than one argument: %u argument. %s argument: The format string consumes more than one argument: %u arguments. %s argument: The string ends in the middle of a directive. %s: I/O error %s:%u:%u %s:%u:%u: cannot convert %s:%u:%u: incomplete character or shift sequence (stdin) Converts text from one encoding to another encoding.
 I/O error Informative output:
 Options controlling conversion problems:
 Options controlling error output:
 Options controlling the input and output format:
 Report bugs to <bug-gnu-libiconv@gnu.org>.
 Usage: %s [OPTION...] [-f ENCODING] [-t ENCODING] [INPUTFILE...]
 Usage: iconv [-c] [-s] [-f fromcode] [-t tocode] [file ...] Written by %s.
 cannot convert byte substitution to Unicode: %s cannot convert byte substitution to target encoding: %s cannot convert byte substitution to wide string: %s cannot convert unicode substitution to target encoding: %s cannot convert widechar substitution to target encoding: %s conversion from %s to %s unsupported conversion from %s unsupported conversion to %s unsupported or:    %s -l
 or:    iconv -l try '%s -l' to get the list of supported encodings Project-Id-Version: libiconv 1.12
Report-Msgid-Bugs-To: bug-gnu-libiconv@gnu.org
POT-Creation-Date: 2016-12-04 17:16+0100
PO-Revision-Date: 2013-05-31 23:39+0800
Last-Translator: Wei-Lun Chao <bluebat@member.fsf.org>
Language-Team: Chinese (traditional) <zh-l10n@linux.org.tw>
Language: zh_TW
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=1; plural=0;
   --byte-subst=格式字串       做為無法轉換的替代位元組
   --help                      顯示這份說明然後離開
   --unicode-subst=格式字串
                              做為無法轉換的萬國碼替代字元
   --version                   輸出版本資訊然後離開
   --widechar-subst=格式字串
                              做為無法轉換的替代寬字元
   -c                          捨棄無法轉換的字元
   -f 編碼, --from-code=編碼
                              輸入的編碼
   -l, --list                  清單支援的編碼
   -s, --silent                抑制關於轉換問題的錯誤訊息
   -t 編碼, --to-code=編碼
                              輸出的編碼
 %s %s 引數：這裡不允許具備大小的格式指令。 %s 引數：這裡不允許具備可變精確度的格式指令。 %s 引數：這裡不允許具備可變寬度的格式指令。 %s 引數：字元 %c 並非有效的轉換符號。 %s 引數：終止格式指令的字元並非有效的轉換符號。 %s 引數：格式字串耗用超過一個引數：%u 個引數。 %s 引數：字串結束於指令中間。 %s：輸入輸出錯誤 %s:%u:%u %s:%u:%u：無法轉換 %s:%u:%u：不完整的字元或是換碼序列 (標準輸入) 將文字從一種編碼轉換到另一種編碼。
 輸入輸出錯誤 詳細資訊的輸出：
 控制轉換問題的選項：
 控制錯誤輸出的選項：
 控制輸入與輸出格式的選項：
 將錯誤通報給 <bug-gnu-libiconv@gnu.org>，
翻譯錯誤通報給 <zh-l10n@linux.org.tw>，
 用法：%s [選項…] [-f 編碼] [-t 編碼] [輸入檔…]
 用法：iconv [-c] [-s] [-f 來源編碼] [-t 目的編碼] [檔案 …] 作者 %s。
 無法轉換替代位元組到萬國碼：%s 無法轉換替代位元組到目標編碼：%s 無法轉換替代位元組到寬字串：%s 無法轉換替代萬國碼到目標編碼：%s 無法轉換替代寬字元到目標編碼：%s 不支援從 %s 轉換到 %s 不支援從 %s 進行轉換 不支援轉換到 %s 或：   %s -l
 或：  iconv -l 嘗試 %s -l 以獲得支援的編碼清單 