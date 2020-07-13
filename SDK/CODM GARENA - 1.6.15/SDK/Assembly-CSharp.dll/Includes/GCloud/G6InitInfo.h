#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class G6InitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "G6InitInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(G6InitInfo*, uintptr_t))(Il2CppBase() + 0x452E290))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(G6InitInfo*, uintptr_t))(Il2CppBase() + 0x452E340))(this, reader);
	}
	template <typename T = void> T xLuaBaseProxy_WriteTo(uintptr_t P0) {
		return ((T (*)(G6InitInfo*, uintptr_t))(Il2CppBase() + 0x452E3F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReadFrom(uintptr_t P0) {
		return ((T (*)(G6InitInfo*, uintptr_t))(Il2CppBase() + 0x452E3F4))(this, P0);
	}

};

}
