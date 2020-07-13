#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RingBuffer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RingBuffer`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_buffer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_head() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_tail() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_maxSize() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Alloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Realloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Drop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFreeWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Used() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Free() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Head() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveTail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticIsWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticIsFreeWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticFree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Destroy() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B700B0))(this);
	}
	template <typename T = void> T Alloc(int32_t size) {
		return ((T (*)(RingBuffer1*, int32_t))(Il2CppBase() + 0x4B70138))(this, size);
	}
	template <typename T = void> T Realloc(int32_t size) {
		return ((T (*)(RingBuffer1*, int32_t))(Il2CppBase() + 0x4B702E0))(this, size);
	}
	template <typename T = int32_t> T Write(uintptr_t item) {
		return ((T (*)(RingBuffer1*, uintptr_t))(Il2CppBase() + 0x4B7043C))(this, item);
	}
	template <typename T = int32_t> T Read(uintptr_t* pOut) {
		return ((T (*)(RingBuffer1*, uintptr_t*))(Il2CppBase() + 0x4B706B0))(this, pOut);
	}
	template <typename T = int32_t> T Reek(uintptr_t* pOut) {
		return ((T (*)(RingBuffer1*, uintptr_t*))(Il2CppBase() + 0x4B709E0))(this, pOut);
	}
	template <typename T = void> T Drop(int32_t length) {
		return ((T (*)(RingBuffer1*, int32_t))(Il2CppBase() + 0x4B70C34))(this, length);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B70DE4))(this);
	}
	template <typename T = bool> T IsWrapped() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B70E6C))(this);
	}
	template <typename T = bool> T IsFreeWrapped() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B70F74))(this);
	}
	template <typename T = int32_t> T Used() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B7107C))(this);
	}
	template <typename T = int32_t> T Free() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B71194))(this);
	}
	template <typename T = int32_t> T Head() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B712AC))(this);
	}
	template <typename T = int32_t> T Tail() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B71398))(this);
	}
	template <typename T = int32_t> T MaxSize() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B71484))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBuffer() {
		return ((T (*)(RingBuffer1*))(Il2CppBase() + 0x4B71570))(this);
	}
	template <typename T = void> T MoveHead(int32_t length) {
		return ((T (*)(RingBuffer1*, int32_t))(Il2CppBase() + 0x4B71600))(this, length);
	}
	template <typename T = void> T MoveTail(int32_t length) {
		return ((T (*)(RingBuffer1*, int32_t))(Il2CppBase() + 0x4B71798))(this, length);
	}
	template <typename T = bool> static T StaticIsWrapped(int32_t head, int32_t tail) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4B71930))(0, head, tail);
	}
	template <typename T = bool> static T StaticIsFreeWrapped(int32_t head, int32_t tail) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4B71990))(0, head, tail);
	}
	template <typename T = int32_t> static T StaticFree(int32_t head, int32_t tail, int32_t maxSize) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4B71A08))(0, head, tail, maxSize);
	}
	template <typename T = int32_t> static T StaticUsed(int32_t head, int32_t tail, int32_t maxSize) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4B71AC4))(0, head, tail, maxSize);
	}

};

}
