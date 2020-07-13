#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaSyncLevelObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaSyncLevelObject"));
	}

	template <typename T = uint32_t> T& Fixed_UID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& active() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveFixed_UID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerActorInfoBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuaSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNotifyTypeEnumType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SaveFixed_UID(uint32_t val) {
		return ((T (*)(LuaSyncLevelObject*, uint32_t))(Il2CppBase() + 0x4A973EC))(this, val);
	}
	template <typename T = uint32_t> T get_ActorId() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A97494))(this);
	}
	template <typename T = void> T set_ActorId(uint32_t value) {
		return ((T (*)(LuaSyncLevelObject*, uint32_t))(Il2CppBase() + 0x4A9749C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A974A4))(this);
	}
	template <typename T = bool> T get_ServerUsability() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A9755C))(this);
	}
	template <typename T = void> T OnServerActorInfoBind() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A97564))(this);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A975FC))(this);
	}
	template <typename T = void> T SetHidden(bool hidden) {
		return ((T (*)(LuaSyncLevelObject*, bool))(Il2CppBase() + 0x4A97768))(this, hidden);
	}
	template <typename T = void> T OnStateChange(uint32_t newState) {
		return ((T (*)(LuaSyncLevelObject*, uint32_t))(Il2CppBase() + 0x4A97908))(this, newState);
	}
	template <typename T = void> T OnLuaSyncNotify(uint32_t NotifyType, int32_t value) {
		return ((T (*)(LuaSyncLevelObject*, uint32_t, int32_t))(Il2CppBase() + 0x4A97A8C))(this, NotifyType, value);
	}
	template <typename T = uintptr_t> T GetNotifyTypeEnumType() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A97B40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A97BE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnButtonClick() {
		return ((T (*)(LuaSyncLevelObject*))(Il2CppBase() + 0x4A97BE8))(this);
	}

};

}
