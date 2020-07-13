#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class ExposedProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "ExposedProperty"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& PropertyPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _invocationChain() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAfterDeserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(ExposedProperty*))(Il2CppBase() + 0x4805A64))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ExposedProperty*))(Il2CppBase() + 0x4805B10))(this);
	}
	template <typename T = uintptr_t> T get_invocationChain() {
		return ((T (*)(ExposedProperty*))(Il2CppBase() + 0x4805CF0))(this);
	}
	template <typename T = bool> T get_IsValid() {
		return ((T (*)(ExposedProperty*))(Il2CppBase() + 0x480658C))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(ExposedProperty*))(Il2CppBase() + 0x4805F8C))(this);
	}
	template <typename T = void> T set_Value(uintptr_t value) {
		return ((T (*)(ExposedProperty*, uintptr_t))(Il2CppBase() + 0x4806254))(this, value);
	}
	template <typename T = void> T xLuaBaseProxy_OnAfterDeserialize() {
		return ((T (*)(ExposedProperty*))(Il2CppBase() + 0x4806840))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_Clone() {
		return ((T (*)(ExposedProperty*))(Il2CppBase() + 0x4806844))(this);
	}

};

}
