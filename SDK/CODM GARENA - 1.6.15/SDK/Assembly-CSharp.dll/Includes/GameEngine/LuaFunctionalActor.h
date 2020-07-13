#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LuaFunctionalActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LuaFunctionalActor"));
	}

	template <typename T = uintptr_t> T& actorConfig() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& actorInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& funConfig() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& agent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_AgentDic() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _audioPlayer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncLuaPropertyChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_audioPlayer() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8DEF4))(this);
	}
	template <typename T = uintptr_t> T get_modelAsset() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8DFBC))(this);
	}
	template <typename T = Il2CppString*> T get_syncAnimStateName() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8E2D0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8E5C4))(this);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8E888))(this);
	}
	template <typename T = void> T Init(uint32_t actorID, uint32_t configID) {
		return ((T (*)(LuaFunctionalActor*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8EBBC))(this, actorID, configID);
	}
	template <typename T = void> T OnSyncLuaPropertyChange(uint32_t propertyID, uint32_t value) {
		return ((T (*)(LuaFunctionalActor*, uint32_t, uint32_t))(Il2CppBase() + 0x4A8F038))(this, propertyID, value);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(LuaFunctionalActor*, float))(Il2CppBase() + 0x4A8F11C))(this, deltaTime);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8F1F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8F30C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(LuaFunctionalActor*))(Il2CppBase() + 0x4A8F314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(LuaFunctionalActor*, float))(Il2CppBase() + 0x4A8F318))(this, P0);
	}

};

}
