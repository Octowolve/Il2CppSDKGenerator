#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JTokenReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JTokenReader"));
	}

	template <typename T = uintptr_t> T& _root() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _initialPath() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _parent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _current() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T get_CurrentToken() {
		return ((T (*)(JTokenReader*))(Il2CppBase() + 0x3974738))(this);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(JTokenReader*))(Il2CppBase() + 0x3974740))(this);
	}
	template <typename T = bool> T ReadOver(uintptr_t t) {
		return ((T (*)(JTokenReader*, uintptr_t))(Il2CppBase() + 0x39748BC))(this, t);
	}
	template <typename T = bool> T ReadToEnd() {
		return ((T (*)(JTokenReader*))(Il2CppBase() + 0x3975090))(this);
	}
	template <typename T = void*> T GetEndToken(uintptr_t c) {
		return ((T (*)(JTokenReader*, uintptr_t))(Il2CppBase() + 0x39751B8))(this, c);
	}
	template <typename T = bool> T ReadInto(uintptr_t c) {
		return ((T (*)(JTokenReader*, uintptr_t))(Il2CppBase() + 0x397484C))(this, c);
	}
	template <typename T = bool> T SetEnd(uintptr_t c) {
		return ((T (*)(JTokenReader*, uintptr_t))(Il2CppBase() + 0x39750B4))(this, c);
	}
	template <typename T = void> T SetToken(uintptr_t token) {
		return ((T (*)(JTokenReader*, uintptr_t))(Il2CppBase() + 0x3974974))(this, token);
	}
	template <typename T = Il2CppString*> T SafeToString(uintptr_t value) {
		return ((T (*)(JTokenReader*, uintptr_t))(Il2CppBase() + 0x39753F0))(this, value);
	}
	template <typename T = bool> T Newtonsoft_Json_IJsonLineInfo_HasLineInfo() {
		return ((T (*)(JTokenReader*))(Il2CppBase() + 0x3975414))(this);
	}
	template <typename T = int32_t> T Newtonsoft_Json_IJsonLineInfo_get_LineNumber() {
		return ((T (*)(JTokenReader*))(Il2CppBase() + 0x3975518))(this);
	}
	template <typename T = int32_t> T Newtonsoft_Json_IJsonLineInfo_get_LinePosition() {
		return ((T (*)(JTokenReader*))(Il2CppBase() + 0x3975618))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(JTokenReader*))(Il2CppBase() + 0x3975718))(this);
	}

};

}
