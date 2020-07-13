#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PaintManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PaintManager"));
	}

	template <typename T = int32_t> T& Segment() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PaintList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPaintMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Paint(uint32_t playerID, int32_t itemID, Il2CppVector3 pos, Il2CppVector3 dir, Il2CppVector3 up) {
		return ((T (*)(PaintManager*, uint32_t, int32_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3EFBDAC))(this, playerID, itemID, pos, dir, up);
	}
	template <typename T = uintptr_t> T GetPaintMesh(uint32_t playerID) {
		return ((T (*)(PaintManager*, uint32_t))(Il2CppBase() + 0x3EFBF88))(this, playerID);
	}

};

}
