#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class RouteInfoBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "RouteInfoBase"));
	}

	template <typename T = uintptr_t> T& RouteType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& AllowLost() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRouteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T CopyInstance() {
		return ((T (*)(RouteInfoBase*))(Il2CppBase() + 0x44394E0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(RouteInfoBase*, uintptr_t))(Il2CppBase() + 0x44395B0))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(RouteInfoBase*, uintptr_t))(Il2CppBase() + 0x4439688))(this, reader);
	}
	template <typename T = uintptr_t> T onCopyInstance() {
		return ((T (*)(RouteInfoBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> static T CreateRouteInfo(uintptr_t routeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4439778))(0, routeType);
	}

};

}
