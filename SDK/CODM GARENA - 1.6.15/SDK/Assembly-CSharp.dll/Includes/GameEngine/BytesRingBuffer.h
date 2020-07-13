#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BytesRingBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BytesRingBuffer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_buffer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_head() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_tail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_maxSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Alloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Realloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Peek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Drop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFreeWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Used() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Free() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Head() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaxSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveTail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticIsWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticIsFreeWrapped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticFree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StaticUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Alloc(int32_t size) {
		return ((T (*)(BytesRingBuffer*, int32_t))(Il2CppBase() + 0x418FC7C))(this, size);
	}
	template <typename T = void> T Realloc(int32_t size) {
		return ((T (*)(BytesRingBuffer*, int32_t))(Il2CppBase() + 0x418FDD4))(this, size);
	}
	template <typename T = int32_t> T Write(Il2CppArray<uintptr_t>* pBuffer, int32_t length) {
		return ((T (*)(BytesRingBuffer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x418FED8))(this, pBuffer, length);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* pOut, int32_t length) {
		return ((T (*)(BytesRingBuffer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4190310))(this, pOut, length);
	}
	template <typename T = int32_t> T Peek(Il2CppArray<uintptr_t>* pOut, int32_t length) {
		return ((T (*)(BytesRingBuffer*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4190434))(this, pOut, length);
	}
	template <typename T = void> T Drop(int32_t length) {
		return ((T (*)(BytesRingBuffer*, int32_t))(Il2CppBase() + 0x41907D0))(this, length);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x41908F4))(this);
	}
	template <typename T = bool> T IsWrapped() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x4190998))(this);
	}
	template <typename T = bool> T IsFreeWrapped() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x4190AF0))(this);
	}
	template <typename T = int32_t> T Used() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x419071C))(this);
	}
	template <typename T = int32_t> T Free() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x419012C))(this);
	}
	template <typename T = int32_t> T Head() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x4190DF8))(this);
	}
	template <typename T = int32_t> T Tail() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x4190E98))(this);
	}
	template <typename T = int32_t> T MaxSize() {
		return ((T (*)(BytesRingBuffer*))(Il2CppBase() + 0x4190F38))(this);
	}
	template <typename T = void> T MoveHead(int32_t length) {
		return ((T (*)(BytesRingBuffer*, int32_t))(Il2CppBase() + 0x41905EC))(this, length);
	}
	template <typename T = void> T MoveTail(int32_t length) {
		return ((T (*)(BytesRingBuffer*, int32_t))(Il2CppBase() + 0x41901E0))(this, length);
	}
	template <typename T = bool> static T StaticIsWrapped(int32_t head, int32_t tail) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4190A40))(0, head, tail);
	}
	template <typename T = bool> static T StaticIsFreeWrapped(int32_t head, int32_t tail) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4190B98))(0, head, tail);
	}
	template <typename T = int32_t> static T StaticFree(int32_t head, int32_t tail, int32_t maxSize) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4190D24))(0, head, tail, maxSize);
	}
	template <typename T = int32_t> static T StaticUsed(int32_t head, int32_t tail, int32_t maxSize) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4190C60))(0, head, tail, maxSize);
	}

};

}
