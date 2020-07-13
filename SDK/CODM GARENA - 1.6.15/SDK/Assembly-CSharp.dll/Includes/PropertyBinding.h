#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PropertyBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PropertyBinding"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& update() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& editMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mLastValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PropertyBinding*))(Il2CppBase() + 0x4CDA648))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PropertyBinding*))(Il2CppBase() + 0x4CDA920))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PropertyBinding*))(Il2CppBase() + 0x4CDA9D0))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PropertyBinding*))(Il2CppBase() + 0x4CDAA80))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(PropertyBinding*))(Il2CppBase() + 0x4CDAB30))(this);
	}
	template <typename T = void> T UpdateTarget() {
		return ((T (*)(PropertyBinding*))(Il2CppBase() + 0x4CDA708))(this);
	}

};

}
