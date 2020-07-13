#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ClientRuntimeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ClientRuntimeInfo"));
	}

	template <typename T = uintptr_t> T& m_InfoType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_InfoValueInt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_InfoValueFloat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_InfoValueString() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfoValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetInfoValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetInfoValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_InfoType() {
		return ((T (*)(ClientRuntimeInfo*))(Il2CppBase() + 0x3C6F868))(this);
	}
	template <typename T = void> T SetInfoValue(int32_t inValueInt) {
		return ((T (*)(ClientRuntimeInfo*, int32_t))(Il2CppBase() + 0x3C6F870))(this, inValueInt);
	}
	template <typename T = void> T SetInfoValue_1(float inValueFloat) {
		return ((T (*)(ClientRuntimeInfo*, float))(Il2CppBase() + 0x3C6F918))(this, inValueFloat);
	}
	template <typename T = void> T SetInfoValue_2(Il2CppString* inValueString) {
		return ((T (*)(ClientRuntimeInfo*, Il2CppString*))(Il2CppBase() + 0x3C6F9C4))(this, inValueString);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClientRuntimeInfo*))(Il2CppBase() + 0x3C6FA6C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(ClientRuntimeInfo*))(Il2CppBase() + 0x3C6FB14))(this);
	}

};

}
