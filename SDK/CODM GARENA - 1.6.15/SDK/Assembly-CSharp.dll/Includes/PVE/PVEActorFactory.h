#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEActorFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEActorFactory"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& ActorUniques() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeUniquePawnName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyUniqueKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerIDsByBaseName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uint32_t> T MakeUniquePawnName(uintptr_t ActorType, uintptr_t PawnObject) {
		return ((T (*)(PVEActorFactory*, uintptr_t, uintptr_t))(Il2CppBase() + 0x436C638))(this, ActorType, PawnObject);
	}
	template <typename T = void> T DestroyUniqueKey(uintptr_t ActorType, uint32_t PlayerID) {
		return ((T (*)(PVEActorFactory*, uintptr_t, uint32_t))(Il2CppBase() + 0x436C7F0))(this, ActorType, PlayerID);
	}
	template <typename T = uintptr_t> T GetPlayerIDsByBaseName(uint32_t BaseName) {
		return ((T (*)(PVEActorFactory*, uint32_t))(Il2CppBase() + 0x436C930))(this, BaseName);
	}

};

}
