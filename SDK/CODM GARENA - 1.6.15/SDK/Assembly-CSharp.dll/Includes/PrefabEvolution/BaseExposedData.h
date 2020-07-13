#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class BaseExposedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "BaseExposedData"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& guid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Label() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ParentId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Order() {
		return *(T*)((uintptr_t)this + 0x18);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x4804424))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x48044BC))(this);
	}
	template <typename T = int32_t> T get_SiblingIndex() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x4804554))(this);
	}
	template <typename T = float> T GetOrder(bool next) {
		return ((T (*)(BaseExposedData*, bool))(Il2CppBase() + 0x480474C))(this, next);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x4804874))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x4804998))(this);
	}
	template <typename T = uintptr_t> T get_Parent() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x48049A0))(this);
	}
	template <typename T = void> T set_Parent(uintptr_t value) {
		return ((T (*)(BaseExposedData*, uintptr_t))(Il2CppBase() + 0x4804AF8))(this, value);
	}
	template <typename T = void*> T get_Children() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x4804B1C))(this);
	}
	template <typename T = void*> T get_Brothers() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x480461C))(this);
	}
	template <typename T = bool> T get_Inherited() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x4804D50))(this);
	}
	template <typename T = bool> T get_Hidden() {
		return ((T (*)(BaseExposedData*))(Il2CppBase() + 0x4804EE8))(this);
	}
	template <typename T = void> T set_Hidden(bool value) {
		return ((T (*)(BaseExposedData*, bool))(Il2CppBase() + 0x4805078))(this, value);
	}
	template <typename T = bool> T get_Childrenm__0(uintptr_t item) {
		return ((T (*)(BaseExposedData*, uintptr_t))(Il2CppBase() + 0x480523C))(this, item);
	}

};

}
