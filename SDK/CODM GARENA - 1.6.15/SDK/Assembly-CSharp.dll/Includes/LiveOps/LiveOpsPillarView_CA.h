#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPillarViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPillarView_CA"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ItemViewList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OtherItemView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_ItemSpace() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_OtherItemRate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector2> T& m_SafeSize() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector2> T& m_SafeSize_Other() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemList_RedNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurItemViewList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdateItemList(uintptr_t tablelist, void* inSelectedItemCallback) {
		return ((T (*)(LiveOpsPillarViewCA*, uintptr_t, void*))(Il2CppBase() + 0x35188C4))(this, tablelist, inSelectedItemCallback);
	}
	template <typename T = void> T UpdateItemList_RedNum(uintptr_t tablelist) {
		return ((T (*)(LiveOpsPillarViewCA*, uintptr_t))(Il2CppBase() + 0x3517BC8))(this, tablelist);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurItemViewList(int32_t nItemCount, uintptr_t* bHasOtherItem) {
		return ((T (*)(LiveOpsPillarViewCA*, int32_t, uintptr_t*))(Il2CppBase() + 0x351C364))(this, nItemCount, bHasOtherItem);
	}
	template <typename T = void> T AdaptationView(int32_t nItemCount) {
		return ((T (*)(LiveOpsPillarViewCA*, int32_t))(Il2CppBase() + 0x3518328))(this, nItemCount);
	}

};

}
