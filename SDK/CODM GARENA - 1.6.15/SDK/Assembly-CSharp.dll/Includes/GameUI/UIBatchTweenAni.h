#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIBatchTweenAni
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIBatchTweenAni"));
	}

	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DispatchTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortHorizontal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortVertical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationObjectHalfRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationObjOrigin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationObjOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaculateItemDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T DispatchTime(Il2CppList<uintptr_t>* timeGroups, uintptr_t eMethod, float fGroupInterval) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, float))(Il2CppBase() + 0x29C82E8))(0, timeGroups, eMethod, fGroupInterval);
	}
	template <typename T = int32_t> static T SortHorizontal(uintptr_t obj1, uintptr_t obj2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29C99F4))(0, obj1, obj2);
	}
	template <typename T = int32_t> static T SortVertical(uintptr_t obj1, uintptr_t obj2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29C9C68))(0, obj1, obj2);
	}
	template <typename T = Il2CppVector2> static T GetAnimationObjectHalfRect(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29C9D50))(0, obj);
	}
	template <typename T = Il2CppVector2> static T GetAnimationObjOrigin(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29C9ADC))(0, obj);
	}
	template <typename T = Il2CppVector2> static T GetAnimationObjOffset(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29CA0E8))(0, obj);
	}
	template <typename T = void> static T CaculateItemDelay(Il2CppList<uintptr_t>* itemsList, uintptr_t eMethod, float fGroupInterval) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, float))(Il2CppBase() + 0x29C8598))(0, itemsList, eMethod, fGroupInterval);
	}

};

}
