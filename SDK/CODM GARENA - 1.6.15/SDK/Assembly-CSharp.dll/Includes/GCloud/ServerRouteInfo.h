#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ServerRouteInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ServerRouteInfo"));
	}

	template <typename T = uint64_t> T& ServerId() {
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
		return ((T (*)(ServerRouteInfo*, uintptr_t))(Il2CppBase() + 0x4439B80))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(ServerRouteInfo*, uintptr_t))(Il2CppBase() + 0x4439C64))(this, reader);
	}
	template <typename T = uintptr_t> T onCopyInstance() {
		return ((T (*)(ServerRouteInfo*))(Il2CppBase() + 0x4439D38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WriteTo(uintptr_t P0) {
		return ((T (*)(ServerRouteInfo*, uintptr_t))(Il2CppBase() + 0x4439E00))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReadFrom(uintptr_t P0) {
		return ((T (*)(ServerRouteInfo*, uintptr_t))(Il2CppBase() + 0x4439E04))(this, P0);
	}

};

}
