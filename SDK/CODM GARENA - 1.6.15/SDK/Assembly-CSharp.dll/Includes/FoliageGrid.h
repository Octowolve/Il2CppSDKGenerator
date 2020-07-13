#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageGrid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageGrid"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& foliageInstanceList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& foliageRenderBatchesDict() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& bounds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& drawBounds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFoliageInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstructRenderBatches() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T AddFoliageInstance(uintptr_t inst) {
		return ((T (*)(FoliageGrid*, uintptr_t))(Il2CppBase() + 0x3CCDE3C))(this, inst);
	}
	template <typename T = void> T ConstructRenderBatches(uintptr_t db) {
		return ((T (*)(FoliageGrid*, uintptr_t))(Il2CppBase() + 0x3CCDF48))(this, db);
	}
	template <typename T = void> T UpdateLOD(Il2CppVector3 viewPos) {
		return ((T (*)(FoliageGrid*, Il2CppVector3))(Il2CppBase() + 0x3CD3E24))(this, viewPos);
	}
	template <typename T = void> T SetLOD(uintptr_t targetLOD) {
		return ((T (*)(FoliageGrid*, uintptr_t))(Il2CppBase() + 0x3CCE978))(this, targetLOD);
	}
	template <typename T = void> T Draw() {
		return ((T (*)(FoliageGrid*))(Il2CppBase() + 0x3CCFD6C))(this);
	}

};

}
