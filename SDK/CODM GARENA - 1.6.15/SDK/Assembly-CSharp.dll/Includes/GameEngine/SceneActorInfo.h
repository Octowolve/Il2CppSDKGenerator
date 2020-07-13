#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneActorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneActorInfo"));
	}

	template <typename T = uint32_t> T& animSyncIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& modelSyncIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hide() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& m_ControllerId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_NickName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& m_ClientUID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& m_ClientParam() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint32_t> T get_ControllerId() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E06FB8))(this);
	}
	template <typename T = void> T set_ControllerId(uint32_t value) {
		return ((T (*)(SceneActorInfo*, uint32_t))(Il2CppBase() + 0x1E06FC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_NickName() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E06FC8))(this);
	}
	template <typename T = void> T set_NickName(Il2CppString* value) {
		return ((T (*)(SceneActorInfo*, Il2CppString*))(Il2CppBase() + 0x1E06FD0))(this, value);
	}
	template <typename T = void> T set_ClientUID(uint32_t value) {
		return ((T (*)(SceneActorInfo*, uint32_t))(Il2CppBase() + 0x1E06FD8))(this, value);
	}
	template <typename T = uint32_t> T get_ClientUID() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E06FE0))(this);
	}
	template <typename T = void> T set_ClientParam(uint32_t value) {
		return ((T (*)(SceneActorInfo*, uint32_t))(Il2CppBase() + 0x1E06FE8))(this, value);
	}
	template <typename T = uint32_t> T get_ClientParam() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E06FF0))(this);
	}
	template <typename T = void> T Init(uint32_t clientUID) {
		return ((T (*)(SceneActorInfo*, uint32_t))(Il2CppBase() + 0x1E06FF8))(this, clientUID);
	}
	template <typename T = void> T Init_1(uint32_t clientUID, uint32_t clientParam) {
		return ((T (*)(SceneActorInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x1E070A0))(this, clientUID, clientParam);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E07164))(this);
	}
	template <typename T = void> T OnSyncProperty(uint32_t propertyID, uint32_t value) {
		return ((T (*)(SceneActorInfo*, uint32_t, uint32_t))(Il2CppBase() + 0x1E07258))(this, propertyID, value);
	}
	template <typename T = void> T OnUpdateModel() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E0747C))(this);
	}
	template <typename T = void> T OnSyncAnim() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E07668))(this);
	}
	template <typename T = void> T OnSetHidden() {
		return ((T (*)(SceneActorInfo*))(Il2CppBase() + 0x1E0784C))(this);
	}

};

}
