#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TerrainContour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TerrainContour"));
	}

	template <typename T = uintptr_t> T& terrain() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _contourMat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& contourMatTemplate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& defaultContourColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& showContour() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& contourThreshold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& topoLinesTex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& topoLinesColor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& topoLinesBGColor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = unsigned char> T& topoLinesWidth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& contourRanges() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_contourMat() {
		return ((T (*)(TerrainContour*))(Il2CppBase() + 0x4656968))(this);
	}

};

}
