#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaInteractionActorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaInteractionActorInfo"));
	}

	template <typename T = uint32_t> T& btnMsgSyncIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& btnMsgParam() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& btnSpriteNameSyncIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& tipMsgSyncIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& btnContentSyncIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& btnUsePlayerId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& m_state() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& m_ActorUseTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_OperatorType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnSyncProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaInteractionActorInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4A9699C))(this, propertyID, value);
	}
	template <typename T = uint32_t> T get_state() {
		return ((T (*)(LuaInteractionActorInfo*))(Il2CppBase() + 0x4A95C64))(this);
	}
	template <typename T = void> T set_state(uint32_t value) {
		return ((T (*)(LuaInteractionActorInfo*, uint32_t))(Il2CppBase() + 0x4A96E7C))(this, value);
	}
	template <typename T = uint32_t> T get_actorUseTime() {
		return ((T (*)(LuaInteractionActorInfo*))(Il2CppBase() + 0x4A940B4))(this);
	}
	template <typename T = uintptr_t> T get_operatorType() {
		return ((T (*)(LuaInteractionActorInfo*))(Il2CppBase() + 0x4A940AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncProperty(uint32_t P0, uint32_t P1) {
		return ((T (*)(LuaInteractionActorInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x4A96FC8))(this, P0, P1);
	}

};

}
