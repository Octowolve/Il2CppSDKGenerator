#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class PEPrefabScript
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "PEPrefabScript"));
	}

	template <typename T = uintptr_t> T& Properties() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Links() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Modifications() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ParentPrefabGUID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& PrefabGUID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& OnBuildModifications() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeforeSerialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAfterDeserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHideInternalObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetObjectHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_OnBuildModifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_OnBuildModifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeOnBuildModifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(PEPrefabScript*))(Il2CppBase() + 0x480B5AC))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(PEPrefabScript*))(Il2CppBase() + 0x480B644))(this);
	}
	template <typename T = uintptr_t> T get_ParentPrefab() {
		return ((T (*)(PEPrefabScript*))(Il2CppBase() + 0x4809638))(this);
	}
	template <typename T = void> T set_ParentPrefab(uintptr_t value) {
		return ((T (*)(PEPrefabScript*, uintptr_t))(Il2CppBase() + 0x480B70C))(this, value);
	}
	template <typename T = uintptr_t> T get_Prefab() {
		return ((T (*)(PEPrefabScript*))(Il2CppBase() + 0x480B814))(this);
	}
	template <typename T = void> T set_Prefab(uintptr_t value) {
		return ((T (*)(PEPrefabScript*, uintptr_t))(Il2CppBase() + 0x480B8D0))(this, value);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(PEPrefabScript*))(Il2CppBase() + 0x480B9D8))(this);
	}
	template <typename T = void> T SetHideInternalObjects(bool value) {
		return ((T (*)(PEPrefabScript*, bool))(Il2CppBase() + 0x48056D4))(this, value);
	}
	template <typename T = void> static T SetObjectHide(uintptr_t obj, bool value) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x480BAC4))(0, obj, value);
	}
	template <typename T = void> T add_OnBuildModifications(uintptr_t value) {
		return ((T (*)(PEPrefabScript*, uintptr_t))(Il2CppBase() + 0x480BB80))(this, value);
	}
	template <typename T = void> T remove_OnBuildModifications(uintptr_t value) {
		return ((T (*)(PEPrefabScript*, uintptr_t))(Il2CppBase() + 0x480BD78))(this, value);
	}
	template <typename T = void> T InvokeOnBuildModifications() {
		return ((T (*)(PEPrefabScript*))(Il2CppBase() + 0x480BF70))(this);
	}

};

}
