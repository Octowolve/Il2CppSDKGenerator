#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class NameRouteInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "NameRouteInfo"));
	}

	template <typename T = Il2CppString*> T& ServiceName() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(NameRouteInfo*, uintptr_t))(Il2CppBase() + 0x46E3584))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(NameRouteInfo*, uintptr_t))(Il2CppBase() + 0x46E365C))(this, reader);
	}
	template <typename T = uintptr_t> T onCopyInstance() {
		return ((T (*)(NameRouteInfo*))(Il2CppBase() + 0x46E3734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WriteTo(uintptr_t P0) {
		return ((T (*)(NameRouteInfo*, uintptr_t))(Il2CppBase() + 0x46E37FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReadFrom(uintptr_t P0) {
		return ((T (*)(NameRouteInfo*, uintptr_t))(Il2CppBase() + 0x46E3804))(this, P0);
	}

};

}
