#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtColor"));
	}

	template <typename T = uintptr_t> static T& transparent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& maroon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& red() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& orange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& yellow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& olive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& purple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& fuchsia() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& white() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& lime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& green() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& navy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& blue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& aqua() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& teal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& black() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& silver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& gray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& chatSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& chatOther() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = unsigned char> T& R() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& G() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = unsigned char> T& B() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = unsigned char> T& A() {
		return *(T*)((uintptr_t)this + 0x3);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RGBA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryParse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_TryParse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = bool> T get_IsTransparent() {
		return ((T (*)(HtColor*))(Il2CppBase() + 0x4763274))(this);
	}
	template <typename T = uintptr_t> static T RGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
		return ((T (*)(void *, unsigned char, unsigned char, unsigned char, unsigned char))(Il2CppBase() + 0x475B934))(0, r, g, b, a);
	}
	template <typename T = bool> static T TryParse(Il2CppString* rs, Il2CppString* gs, Il2CppString* bs, uintptr_t r, uintptr_t g, uintptr_t b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4763288))(0, rs, gs, bs, r, g, b);
	}
	template <typename T = bool> static T TryParse_1(Il2CppString* rs, Il2CppString* gs, Il2CppString* bs, Il2CppString* aa, uintptr_t r, uintptr_t g, uintptr_t b, uintptr_t a) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47634BC))(0, rs, gs, bs, aa, r, g, b, a);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x475BA7C))(0, text);
	}
	template <typename T = uintptr_t> static T Parse_1(Il2CppString* text, uintptr_t onError) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x475BBAC))(0, text, onError);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HtColor*))(Il2CppBase() + 0x4763A84))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(HtColor*))(Il2CppBase() + 0x4763E60))(this);
	}

};

}
