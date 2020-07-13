#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.XPath {

class XPathParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.XPath", "XPathParser"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ErrorOutput() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& eof_token() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& debug() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& yyFinal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& yyExpectingState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& yyMax() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyLhs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyDefRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyDgoto() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yySindex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyRindex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyGindex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& yyCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T Compile(Il2CppString* xpath) {
		return ((T (*)(XPathParser*, Il2CppString*))(Il2CppBase() + 0x2A866E0))(this, xpath);
	}
	template <typename T = uintptr_t> T CreateNodeTest(uintptr_t axis, uintptr_t nodeTest, uintptr_t plist) {
		return ((T (*)(XPathParser*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A8B4C8))(this, axis, nodeTest, plist);
	}
	template <typename T = uintptr_t> T CreateNodeTest_1(uintptr_t axis, uintptr_t test) {
		return ((T (*)(XPathParser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A8B5F4))(this, axis, test);
	}
	template <typename T = Il2CppString*> static T yyname(int32_t token) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2A8B954))(0, token);
	}
	template <typename T = uintptr_t> T yyDefault(uintptr_t first) {
		return ((T (*)(XPathParser*, uintptr_t))(Il2CppBase() + 0x2A8BAD0))(this, first);
	}
	template <typename T = uintptr_t> T yyparse(uintptr_t yyLex) {
		return ((T (*)(XPathParser*, uintptr_t))(Il2CppBase() + 0x2A86914))(this, yyLex);
	}

};

}
