#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ZoneRouteInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ZoneRouteInfo"));
	}

	template <typename T = uint32_t> T& TypeId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ZoneId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onCopyInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(ZoneRouteInfo*, uintptr_t))(Il2CppBase() + 0x4444A8C))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(ZoneRouteInfo*, uintptr_t))(Il2CppBase() + 0x4444B70))(this, reader);
	}
	template <typename T = uintptr_t> T onCopyInstance() {
		return ((T (*)(ZoneRouteInfo*))(Il2CppBase() + 0x4444C54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WriteTo(uintptr_t P0) {
		return ((T (*)(ZoneRouteInfo*, uintptr_t))(Il2CppBase() + 0x4444D24))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReadFrom(uintptr_t P0) {
		return ((T (*)(ZoneRouteInfo*, uintptr_t))(Il2CppBase() + 0x4444D28))(this, P0);
	}

};

}
