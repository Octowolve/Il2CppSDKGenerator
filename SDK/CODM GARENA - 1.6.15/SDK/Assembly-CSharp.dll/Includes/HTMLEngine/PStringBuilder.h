#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class PStringBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "PStringBuilder"));
	}

	template <typename T = uintptr_t> T& sb() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Implicit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Append() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Append() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnAcquire() {
		return ((T (*)(PStringBuilder*))(Il2CppBase() + 0x476A96C))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(PStringBuilder*))(Il2CppBase() + 0x476AA04))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t psb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x476AAC4))(0, psb);
	}
	template <typename T = void> T Append(char c) {
		return ((T (*)(PStringBuilder*, char))(Il2CppBase() + 0x476AB74))(this, c);
	}
	template <typename T = void> T Append_1(Il2CppString* s) {
		return ((T (*)(PStringBuilder*, Il2CppString*))(Il2CppBase() + 0x476AC3C))(this, s);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PStringBuilder*))(Il2CppBase() + 0x476AD04))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(PStringBuilder*))(Il2CppBase() + 0x476ADC8))(this);
	}

};

}
