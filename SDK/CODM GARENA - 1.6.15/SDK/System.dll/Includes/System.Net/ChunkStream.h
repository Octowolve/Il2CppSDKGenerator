#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ChunkStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ChunkStream"));
	}

	template <typename T = uintptr_t> T& headers() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& chunkSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& chunkRead() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& saved() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& sawCR() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& gotit() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = int32_t> T& trailerState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& chunks() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T ResetBuffer() {
		return ((T (*)(ChunkStream*))(Il2CppBase() + 0x42B884C))(this);
	}
	template <typename T = void> T WriteAndReadBack(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t read) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x42B8890))(this, buffer, offset, size, read);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B7D40))(this, buffer, offset, size);
	}
	template <typename T = int32_t> T ReadFromChunks(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B88F4))(this, buffer, offset, size);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B81EC))(this, buffer, offset, size);
	}
	template <typename T = void> T InternalWrite(Il2CppArray<uintptr_t>* buffer, uintptr_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x42B8AD8))(this, buffer, offset, size);
	}
	template <typename T = bool> T get_WantMore() {
		return ((T (*)(ChunkStream*))(Il2CppBase() + 0x42B7D58))(this);
	}
	template <typename T = int32_t> T get_ChunkLeft() {
		return ((T (*)(ChunkStream*))(Il2CppBase() + 0x42B820C))(this);
	}
	template <typename T = uintptr_t> T ReadBody(Il2CppArray<uintptr_t>* buffer, uintptr_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x42B900C))(this, buffer, offset, size);
	}
	template <typename T = uintptr_t> T GetChunkSize(Il2CppArray<uintptr_t>* buffer, uintptr_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x42B8C20))(this, buffer, offset, size);
	}
	template <typename T = Il2CppString*> static T RemoveChunkExtension(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42B9770))(0, input);
	}
	template <typename T = uintptr_t> T ReadCRLF(Il2CppArray<uintptr_t>* buffer, uintptr_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x42B917C))(this, buffer, offset, size);
	}
	template <typename T = uintptr_t> T ReadTrailer(Il2CppArray<uintptr_t>* buffer, uintptr_t offset, int32_t size) {
		return ((T (*)(ChunkStream*, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x42B92C8))(this, buffer, offset, size);
	}
	template <typename T = void> static T ThrowProtocolViolation(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42B96BC))(0, message);
	}

};

}
