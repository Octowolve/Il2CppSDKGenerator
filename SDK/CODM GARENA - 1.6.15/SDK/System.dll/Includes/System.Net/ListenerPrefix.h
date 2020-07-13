#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ListenerPrefix
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ListenerPrefix"));
	}

	template <typename T = Il2CppString*> T& original() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& host() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint16_t> T& port() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& secure() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Listener() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ListenerPrefix*))(Il2CppBase() + 0x3E4AA70))(this);
	}
	template <typename T = bool> T get_Secure() {
		return ((T (*)(ListenerPrefix*))(Il2CppBase() + 0x3E4AA78))(this);
	}
	template <typename T = Il2CppString*> T get_Host() {
		return ((T (*)(ListenerPrefix*))(Il2CppBase() + 0x3E4AA80))(this);
	}
	template <typename T = int32_t> T get_Port() {
		return ((T (*)(ListenerPrefix*))(Il2CppBase() + 0x3E4AA88))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(ListenerPrefix*))(Il2CppBase() + 0x3E4AA90))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(ListenerPrefix*, uintptr_t))(Il2CppBase() + 0x3E4AA98))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ListenerPrefix*))(Il2CppBase() + 0x3E4AB84))(this);
	}
	template <typename T = void> T Parse(Il2CppString* uri) {
		return ((T (*)(ListenerPrefix*, Il2CppString*))(Il2CppBase() + 0x3E4A82C))(this, uri);
	}
	template <typename T = void> static T CheckUri(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E4ABB0))(0, uri);
	}

};

}
