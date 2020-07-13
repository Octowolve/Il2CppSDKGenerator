#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPlaylistArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPlaylistArray"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4915548))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x4914C04))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4914C90))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4914E88))(this);
	}
	template <typename T = uintptr_t> T Begin() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x49155DC))(this);
	}
	template <typename T = uintptr_t> T End() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x49156C8))(this);
	}
	template <typename T = uintptr_t> T FindEx(uintptr_t in_Item) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x49157B4))(this, in_Item);
	}
	template <typename T = uintptr_t> T Erase(uintptr_t in_rIter) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x4915924))(this, in_rIter);
	}
	template <typename T = void> T Erase_1(uint32_t in_uIndex) {
		return ((T (*)(AkPlaylistArray*, uint32_t))(Il2CppBase() + 0x4915A94))(this, in_uIndex);
	}
	template <typename T = uintptr_t> T EraseSwap(uintptr_t in_rIter) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x4915B48))(this, in_rIter);
	}
	template <typename T = uintptr_t> T Reserve(uint32_t in_ulReserve) {
		return ((T (*)(AkPlaylistArray*, uint32_t))(Il2CppBase() + 0x4915CB8))(this, in_ulReserve);
	}
	template <typename T = uint32_t> T Reserved() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4915D6C))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4915E18))(this);
	}
	template <typename T = uint32_t> T Length() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4915EC4))(this);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4915F70))(this);
	}
	template <typename T = uintptr_t> T Exists(uintptr_t in_Item) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x491601C))(this, in_Item);
	}
	template <typename T = uintptr_t> T AddLast() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x49161C8))(this);
	}
	template <typename T = uintptr_t> T AddLast_1(uintptr_t in_rItem) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x49162F4))(this, in_rItem);
	}
	template <typename T = uintptr_t> T Last() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x49164A0))(this);
	}
	template <typename T = void> T RemoveLast() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x491658C))(this);
	}
	template <typename T = uintptr_t> T Remove(uintptr_t in_rItem) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x4916638))(this, in_rItem);
	}
	template <typename T = uintptr_t> T RemoveSwap(uintptr_t in_rItem) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x4916768))(this, in_rItem);
	}
	template <typename T = void> T RemoveAll() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4916898))(this);
	}
	template <typename T = uintptr_t> T ItemAtIndex(uint32_t uiIndex) {
		return ((T (*)(AkPlaylistArray*, uint32_t))(Il2CppBase() + 0x4916944))(this, uiIndex);
	}
	template <typename T = uintptr_t> T Insert(uint32_t in_uIndex) {
		return ((T (*)(AkPlaylistArray*, uint32_t))(Il2CppBase() + 0x4916A38))(this, in_uIndex);
	}
	template <typename T = bool> T GrowArray(uint32_t in_uGrowBy) {
		return ((T (*)(AkPlaylistArray*, uint32_t))(Il2CppBase() + 0x4916B6C))(this, in_uGrowBy);
	}
	template <typename T = bool> T GrowArray_1() {
		return ((T (*)(AkPlaylistArray*))(Il2CppBase() + 0x4916C20))(this);
	}
	template <typename T = bool> T Resize(uint32_t in_uiSize) {
		return ((T (*)(AkPlaylistArray*, uint32_t))(Il2CppBase() + 0x4916CCC))(this, in_uiSize);
	}
	template <typename T = void> T Transfer(uintptr_t in_rSource) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x4916D80))(this, in_rSource);
	}
	template <typename T = uintptr_t> T Copy(uintptr_t in_rSource) {
		return ((T (*)(AkPlaylistArray*, uintptr_t))(Il2CppBase() + 0x4916EB0))(this, in_rSource);
	}

};

}
