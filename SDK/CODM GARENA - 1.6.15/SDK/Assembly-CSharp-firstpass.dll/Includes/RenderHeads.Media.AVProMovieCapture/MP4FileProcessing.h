#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProMovieCapture {

class MP4FileProcessing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RenderHeads.Media.AVProMovieCapture", "MP4FileProcessing"));
	}

	template <typename T = int32_t> static T& ChunkHeaderSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CopyBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& Atom_moov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& Atom_mdat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uint32_t> static T& Atom_cmov() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint32_t> static T& Atom_trak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uint32_t> static T& Atom_mdia() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uint32_t> static T& Atom_minf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uint32_t> static T& Atom_stbl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uint32_t> static T& Atom_stco() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uint32_t> static T& Atom_co64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& _reader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _writeFile() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> static T ApplyFastStart(Il2CppString* filePath, bool keepBackup) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3892EDC))(0, filePath, keepBackup);
	}
	template <typename T = bool> static T ApplyFastStart_1(Il2CppString* srcPath, Il2CppString* dstPath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3893568))(0, srcPath, dstPath);
	}
	template <typename T = bool> T Open(uintptr_t srcStream, uintptr_t dstStream) {
		return ((T (*)(MP4FileProcessing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x389395C))(this, srcStream, dstStream);
	}
	template <typename T = void> T Close() {
		return ((T (*)(MP4FileProcessing*))(Il2CppBase() + 0x3893E40))(this);
	}
	template <typename T = uintptr_t> static T GetFirstChunkOfType(uint32_t id, Il2CppList<uintptr_t>* chunks) {
		return ((T (*)(void *, uint32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3894144))(0, id, chunks);
	}
	template <typename T = Il2CppList<uintptr_t>*> T ReadChildChunks(uintptr_t parentChunk) {
		return ((T (*)(MP4FileProcessing*, uintptr_t))(Il2CppBase() + 0x3893E74))(this, parentChunk);
	}
	template <typename T = uintptr_t> T ReadChunkHeader() {
		return ((T (*)(MP4FileProcessing*))(Il2CppBase() + 0x3894A24))(this);
	}
	template <typename T = bool> T ChunkContainsChildChunkWithId(uintptr_t chunk, uint32_t id) {
		return ((T (*)(MP4FileProcessing*, uintptr_t, uint32_t))(Il2CppBase() + 0x38942E8))(this, chunk, id);
	}
	template <typename T = void> T WriteChunk(uintptr_t chunk) {
		return ((T (*)(MP4FileProcessing*, uintptr_t))(Il2CppBase() + 0x38949A8))(this, chunk);
	}
	template <typename T = void> T WriteChunkHeader(uintptr_t chunk) {
		return ((T (*)(MP4FileProcessing*, uintptr_t))(Il2CppBase() + 0x3894FD4))(this, chunk);
	}
	template <typename T = void> T CopyBytes(int64_t numBytes) {
		return ((T (*)(MP4FileProcessing*, int64_t))(Il2CppBase() + 0x3894E28))(this, numBytes);
	}
	template <typename T = void> T WriteChunk_moov(uintptr_t parentChunk, uint64_t byteOffset) {
		return ((T (*)(MP4FileProcessing*, uintptr_t, uint64_t))(Il2CppBase() + 0x3894450))(this, parentChunk, byteOffset);
	}
	template <typename T = uint32_t> T ReadUInt32() {
		return ((T (*)(MP4FileProcessing*))(Il2CppBase() + 0x3894C50))(this);
	}
	template <typename T = uint64_t> T ReadUInt64() {
		return ((T (*)(MP4FileProcessing*))(Il2CppBase() + 0x3894D3C))(this);
	}
	template <typename T = void> T WriteUInt32(uint32_t value, bool isBigEndian) {
		return ((T (*)(MP4FileProcessing*, uint32_t, bool))(Il2CppBase() + 0x3895054))(this, value, isBigEndian);
	}
	template <typename T = void> T WriteUInt64(uint64_t value) {
		return ((T (*)(MP4FileProcessing*, uint64_t))(Il2CppBase() + 0x3895164))(this, value);
	}
	template <typename T = Il2CppString*> static T ChunkType(uint32_t id) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x3895274))(0, id);
	}
	template <typename T = uint32_t> static T ChunkId(Il2CppString* id) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3895524))(0, id);
	}

};

}
