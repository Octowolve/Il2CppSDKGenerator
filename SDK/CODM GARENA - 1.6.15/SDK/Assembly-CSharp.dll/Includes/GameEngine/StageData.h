#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class StageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "StageData"));
	}

	template <typename T = int32_t> T& m_TargetMapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsReconnect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ReconnectFromLobby() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& m_IsDirectConnect() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_TargetMapId() {
		return ((T (*)(StageData*))(Il2CppBase() + 0x34040DC))(this);
	}
	template <typename T = void> T set_TargetMapId(int32_t value) {
		return ((T (*)(StageData*, int32_t))(Il2CppBase() + 0x34040E4))(this, value);
	}
	template <typename T = uint64_t> T get_PlayerId() {
		return ((T (*)(StageData*))(Il2CppBase() + 0x34040EC))(this);
	}
	template <typename T = void> T set_PlayerId(uint64_t value) {
		return ((T (*)(StageData*, uint64_t))(Il2CppBase() + 0x34040F4))(this, value);
	}
	template <typename T = bool> T get_IsReconnect() {
		return ((T (*)(StageData*))(Il2CppBase() + 0x3404104))(this);
	}
	template <typename T = void> T set_IsReconnect(bool value) {
		return ((T (*)(StageData*, bool))(Il2CppBase() + 0x340410C))(this, value);
	}
	template <typename T = bool> T get_IsDirectConnect() {
		return ((T (*)(StageData*))(Il2CppBase() + 0x3404114))(this);
	}
	template <typename T = void> T set_IsDirectConnect(bool value) {
		return ((T (*)(StageData*, bool))(Il2CppBase() + 0x340411C))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StageData*))(Il2CppBase() + 0x3404124))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(StageData*))(Il2CppBase() + 0x3404254))(this);
	}

};

}
