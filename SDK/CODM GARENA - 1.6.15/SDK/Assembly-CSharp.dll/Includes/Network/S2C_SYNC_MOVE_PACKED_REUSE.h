#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCMOVEPACKEDREUSE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_MOVE_PACKED_REUSE"));
	}

	template <typename T = int32_t> T& DefaultItemCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CSYNCMOVEPACKEDREUSE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E90618))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_Unserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(S2CSYNCMOVEPACKEDREUSE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E908D4))(this, P0, P1);
	}

};

}
