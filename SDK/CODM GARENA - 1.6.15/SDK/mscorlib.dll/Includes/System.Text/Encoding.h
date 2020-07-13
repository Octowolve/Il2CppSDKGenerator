#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class Encoding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Text", "Encoding"));
	}

	template <typename T = int32_t> T& codePage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& windows_code_page() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& is_readonly() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& decoder_fallback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& encoder_fallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& i18nAssembly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& i18nDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& encoding_infos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& encodings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> T& body_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& encoding_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& header_name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& is_mail_news_display() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& is_mail_news_save() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& is_browser_save() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& is_browser_display() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = Il2CppString*> T& web_name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& asciiEncoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& bigEndianEncoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& defaultEncoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& utf7Encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& utf8EncodingWithMarkers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& utf8EncodingWithoutMarkers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& unicodeEncoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& isoLatin1Encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& utf8EncodingUnsafe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& utf32Encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& bigEndianUTF32Encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& lockobj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = Il2CppString*> static T _(Il2CppString* arg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x429774C))(0, arg);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x429C19C))(this);
	}
	template <typename T = uintptr_t> T get_DecoderFallback() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x4298C70))(this);
	}
	template <typename T = void> T set_DecoderFallback(uintptr_t value) {
		return ((T (*)(Encoding*, uintptr_t))(Il2CppBase() + 0x429C1A4))(this, value);
	}
	template <typename T = uintptr_t> T get_EncoderFallback() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x4297F04))(this);
	}
	template <typename T = void> T SetFallbackInternal(uintptr_t e, uintptr_t d) {
		return ((T (*)(Encoding*, uintptr_t, uintptr_t))(Il2CppBase() + 0x429C29C))(this, e, d);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(Encoding*, uintptr_t))(Il2CppBase() + 0x429C2B0))(this, value);
	}
	template <typename T = int32_t> T GetByteCount(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, chars, index, count);
	}
	template <typename T = int32_t> T GetByteCount_1(Il2CppString* s) {
		return ((T (*)(Encoding*, Il2CppString*))(Il2CppBase() + 0x429C3D0))(this, s);
	}
	template <typename T = int32_t> T GetByteCount_2(Il2CppArray<uintptr_t>* chars) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429C4C8))(this, chars);
	}
	template <typename T = int32_t> T GetBytes(Il2CppArray<uintptr_t>* chars, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, chars, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = int32_t> T GetBytes_1(Il2CppString* s, int32_t charIndex, int32_t charCount, Il2CppArray<uintptr_t>* bytes, int32_t byteIndex) {
		return ((T (*)(Encoding*, Il2CppString*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x429C5B0))(this, s, charIndex, charCount, bytes, byteIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes_2(Il2CppString* s) {
		return ((T (*)(Encoding*, Il2CppString*))(Il2CppBase() + 0x429C8A0))(this, s);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes_3(Il2CppArray<uintptr_t>* chars, int32_t index, int32_t count) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x429CA68))(this, chars, index, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes_4(Il2CppArray<uintptr_t>* chars) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429CB6C))(this, chars);
	}
	template <typename T = int32_t> T GetCharCount(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, bytes, index, count);
	}
	template <typename T = int32_t> T GetChars(Il2CppArray<uintptr_t>* bytes, int32_t byteIndex, int32_t byteCount, Il2CppArray<uintptr_t>* chars, int32_t charIndex) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, bytes, byteIndex, byteCount, chars, charIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetChars_1(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x429CC78))(this, bytes, index, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetChars_2(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429CD7C))(this, bytes);
	}
	template <typename T = uintptr_t> T GetDecoder() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x4299358))(this);
	}
	template <typename T = uintptr_t> static T InvokeI18N(Il2CppString* name, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429CF10))(0, name, args);
	}
	template <typename T = uintptr_t> static T GetEncoding(int32_t codepage) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x429D778))(0, codepage);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x429F08C))(this);
	}
	template <typename T = uintptr_t> static T GetEncoding_1(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x429F130))(0, name);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x429F860))(this);
	}
	template <typename T = int32_t> T GetMaxByteCount(int32_t charCount) {
		return ((T (*)(Encoding*, int32_t))(Il2CppBase() + 0x0))(this, charCount);
	}
	template <typename T = int32_t> T GetMaxCharCount(int32_t byteCount) {
		return ((T (*)(Encoding*, int32_t))(Il2CppBase() + 0x0))(this, byteCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPreamble() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x429F8D4))(this);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x429F960))(this, bytes, index, count);
	}
	template <typename T = Il2CppString*> T GetString_1(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(Encoding*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x429F990))(this, bytes);
	}
	template <typename T = int32_t> T get_CodePage() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x429FA78))(this);
	}
	template <typename T = Il2CppString*> T get_WebName() {
		return ((T (*)(Encoding*))(Il2CppBase() + 0x429FA80))(this);
	}
	template <typename T = uintptr_t> static T get_ASCII() {
		return ((T (*)(void *))(Il2CppBase() + 0x429DE70))(0);
	}
	template <typename T = uintptr_t> static T get_BigEndianUnicode() {
		return ((T (*)(void *))(Il2CppBase() + 0x429EB60))(0);
	}
	template <typename T = Il2CppString*> static T InternalCodePage(uintptr_t code_page) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x429FAA4))(0, code_page);
	}
	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x42955D0))(0);
	}
	template <typename T = uintptr_t> static T get_ISOLatin1() {
		return ((T (*)(void *))(Il2CppBase() + 0x429EE00))(0);
	}
	template <typename T = uintptr_t> static T get_UTF7() {
		return ((T (*)(void *))(Il2CppBase() + 0x429E0FC))(0);
	}
	template <typename T = uintptr_t> static T get_UTF8() {
		return ((T (*)(void *))(Il2CppBase() + 0x429E38C))(0);
	}
	template <typename T = uintptr_t> static T get_UTF8Unmarked() {
		return ((T (*)(void *))(Il2CppBase() + 0x429FAAC))(0);
	}
	template <typename T = uintptr_t> static T get_UTF8UnmarkedUnsafe() {
		return ((T (*)(void *))(Il2CppBase() + 0x429FDF0))(0);
	}
	template <typename T = uintptr_t> static T get_Unicode() {
		return ((T (*)(void *))(Il2CppBase() + 0x428803C))(0);
	}
	template <typename T = uintptr_t> static T get_UTF32() {
		return ((T (*)(void *))(Il2CppBase() + 0x429E620))(0);
	}
	template <typename T = uintptr_t> static T get_BigEndianUTF32() {
		return ((T (*)(void *))(Il2CppBase() + 0x429E8C0))(0);
	}
	template <typename T = int32_t> T GetByteCount_3(uintptr_t chars, int32_t count) {
		return ((T (*)(Encoding*, uintptr_t, int32_t))(Il2CppBase() + 0x42A01D4))(this, chars, count);
	}
	template <typename T = int32_t> T GetBytes_5(uintptr_t chars, int32_t charCount, uintptr_t bytes, int32_t byteCount) {
		return ((T (*)(Encoding*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x42A0384))(this, chars, charCount, bytes, byteCount);
	}

};

}
