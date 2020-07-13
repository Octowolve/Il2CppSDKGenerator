#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageActor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageActor"));
	}

	template <typename T = uintptr_t> T& foliageDatabase() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& foliageInstanceList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& foliageRenderBatches() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& foliageGrid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherBatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FoliageActor*))(Il2CppBase() + 0x3CCDA84))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FoliageActor*))(Il2CppBase() + 0x3CCDB1C))(this);
	}
	template <typename T = void> T BuildGrid() {
		return ((T (*)(FoliageActor*))(Il2CppBase() + 0x3CCDBC0))(this);
	}
	template <typename T = void> T GatherBatch() {
		return ((T (*)(FoliageActor*))(Il2CppBase() + 0x3CCED08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FoliageActor*))(Il2CppBase() + 0x3CCF830))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(FoliageActor*))(Il2CppBase() + 0x3CCFFE8))(this);
	}

};

}
