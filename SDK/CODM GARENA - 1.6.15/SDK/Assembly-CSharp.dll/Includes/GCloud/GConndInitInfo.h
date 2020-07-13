#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GConndInitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GConndInitInfo"));
	}

	template <typename T = uint64_t> T& UnitID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& ServiceName() {
		return *(T*)((uintptr_t)this + 0x38);
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
		return ((T (*)(GConndInitInfo*, uintptr_t))(Il2CppBase() + 0x4534A38))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(GConndInitInfo*, uintptr_t))(Il2CppBase() + 0x4534B20))(this, reader);
	}
	template <typename T = void> T xLuaBaseProxy_WriteTo(uintptr_t P0) {
		return ((T (*)(GConndInitInfo*, uintptr_t))(Il2CppBase() + 0x4534BFC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ReadFrom(uintptr_t P0) {
		return ((T (*)(GConndInitInfo*, uintptr_t))(Il2CppBase() + 0x4534C00))(this, P0);
	}

};

}
