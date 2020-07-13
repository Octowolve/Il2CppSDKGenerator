#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LineRenderEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LineRenderEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_LineRendererList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_EndPosEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherAllLineRenders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstLinePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLinePositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T GatherAllLineRenders() {
		return ((T (*)(LineRenderEffect*))(Il2CppBase() + 0x2496FDC))(this);
	}
	template <typename T = void> T SetFirstLinePosition(Il2CppVector3 begin, Il2CppVector3 end) {
		return ((T (*)(LineRenderEffect*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x24972F8))(this, begin, end);
	}
	template <typename T = void> T SetLinePositions(Il2CppList<Il2CppVector3>* positionList, bool showEndPosEffect) {
		return ((T (*)(LineRenderEffect*, Il2CppList<Il2CppVector3>*, bool))(Il2CppBase() + 0x24974D4))(this, positionList, showEndPosEffect);
	}
	template <typename T = void> T ClearPositions() {
		return ((T (*)(LineRenderEffect*))(Il2CppBase() + 0x2497838))(this);
	}

};

}
