#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class PEExposedProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "PEExposedProperties"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& InheritedProperties() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& PrefabScript() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Properties() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Groups() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& Hidden() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeforeSerialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAfterDeserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInheritedProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_FindProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_FindProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInherited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(PEExposedProperties*))(Il2CppBase() + 0x48087CC))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(PEExposedProperties*))(Il2CppBase() + 0x4808864))(this);
	}
	template <typename T = void*> T GetInheritedProperties() {
		return ((T (*)(PEExposedProperties*))(Il2CppBase() + 0x4808BF8))(this);
	}
	template <typename T = void> T Add(uintptr_t exposed) {
		return ((T (*)(PEExposedProperties*, uintptr_t))(Il2CppBase() + 0x4809904))(this, exposed);
	}
	template <typename T = void> T Add_1(uintptr_t exposed) {
		return ((T (*)(PEExposedProperties*, uintptr_t))(Il2CppBase() + 0x4809A60))(this, exposed);
	}
	template <typename T = void> T Add_2(uintptr_t exposed) {
		return ((T (*)(PEExposedProperties*, uintptr_t))(Il2CppBase() + 0x4809B80))(this, exposed);
	}
	template <typename T = void> T Remove(int32_t id) {
		return ((T (*)(PEExposedProperties*, int32_t))(Il2CppBase() + 0x4809CA0))(this, id);
	}
	template <typename T = uintptr_t> T FindProperty(Il2CppString* label) {
		return ((T (*)(PEExposedProperties*, Il2CppString*))(Il2CppBase() + 0x4809E94))(this, label);
	}
	template <typename T = uintptr_t> T FindProperty_1(int32_t id) {
		return ((T (*)(PEExposedProperties*, int32_t))(Il2CppBase() + 0x480A020))(this, id);
	}
	template <typename T = uintptr_t> T FindProperty_2(uint32_t id) {
		return ((T (*)(PEExposedProperties*, uint32_t))(Il2CppBase() + 0x480A1AC))(this, id);
	}
	template <typename T = uintptr_t> T get_Item(int32_t id) {
		return ((T (*)(PEExposedProperties*, int32_t))(Il2CppBase() + 0x48049D0))(this, id);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* label) {
		return ((T (*)(PEExposedProperties*, Il2CppString*))(Il2CppBase() + 0x480A340))(this, label);
	}
	template <typename T = void*> T get_Items() {
		return ((T (*)(PEExposedProperties*))(Il2CppBase() + 0x48096F4))(this);
	}
	template <typename T = void*> T get_OrderedItems() {
		return ((T (*)(PEExposedProperties*))(Il2CppBase() + 0x4804C10))(this);
	}
	template <typename T = bool> T GetInherited(int32_t id) {
		return ((T (*)(PEExposedProperties*, int32_t))(Il2CppBase() + 0x4804D80))(this, id);
	}
	template <typename T = bool> T GetHidden(int32_t id) {
		return ((T (*)(PEExposedProperties*, int32_t))(Il2CppBase() + 0x4804F18))(this, id);
	}
	template <typename T = void> T SetHide(uintptr_t property, bool state) {
		return ((T (*)(PEExposedProperties*, uintptr_t, bool))(Il2CppBase() + 0x48050A8))(this, property, state);
	}
	template <typename T = bool> static T GetInheritedPropertiesm__0(uintptr_t i) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x480A480))(0, i);
	}
	template <typename T = uintptr_t> T GetInheritedPropertiesm__1(uintptr_t p) {
		return ((T (*)(PEExposedProperties*, uintptr_t))(Il2CppBase() + 0x480A4AC))(this, p);
	}
	template <typename T = bool> static T GetInheritedPropertiesm__2(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x480A4F0))(0, p);
	}
	template <typename T = bool> static T GetInheritedPropertiesm__3(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x480A518))(0, p);
	}
	template <typename T = bool> T GetInheritedPropertiesm__4(int32_t p) {
		return ((T (*)(PEExposedProperties*, int32_t))(Il2CppBase() + 0x480A540))(this, p);
	}

};

}
