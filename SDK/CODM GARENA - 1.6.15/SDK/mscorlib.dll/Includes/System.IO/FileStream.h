#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class FileStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "FileStream"));
	}

	template <typename T = uintptr_t> T& access() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& owner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& async() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& canseek() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = int64_t> T& append_startpos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& anonymous() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& buf_size() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& buf_length() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& buf_offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& buf_dirty() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int64_t> T& buf_start() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF8F78))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF8F8C))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF8FA4))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF8FAC))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF9208))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(FileStream*, int64_t))(Il2CppBase() + 0x3FF938C))(this, value);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF9580))(this);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(FileStream*, unsigned char))(Il2CppBase() + 0x3FF998C))(this, value);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** array, int32_t offset, int32_t count) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x3FF9BC4))(this, array, offset, count);
	}
	template <typename T = int32_t> T ReadInternal(Il2CppArray<uintptr_t>* dest, int32_t offset, int32_t count) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FF9F20))(this, dest, offset, count);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t numBytes, uintptr_t userCallback, uintptr_t stateObject) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FFA02C))(this, array, offset, numBytes, userCallback, stateObject);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(FileStream*, uintptr_t))(Il2CppBase() + 0x3FFA6C0))(this, asyncResult);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFAA8C))(this, array, offset, count);
	}
	template <typename T = void> T WriteInternal(Il2CppArray<uintptr_t>* src, int32_t offset, int32_t count) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFADB4))(this, src, offset, count);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t numBytes, uintptr_t userCallback, uintptr_t stateObject) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FFB024))(this, array, offset, numBytes, userCallback, stateObject);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(FileStream*, uintptr_t))(Il2CppBase() + 0x3FFBAE8))(this, asyncResult);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(FileStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3FFBE80))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(FileStream*, int64_t))(Il2CppBase() + 0x3FFC20C))(this, value);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FFC550))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FFC66C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(FileStream*, bool))(Il2CppBase() + 0x3FFC6D8))(this, disposing);
	}
	template <typename T = int32_t> T ReadSegment(Il2CppArray<uintptr_t>* dest, int32_t dest_offset, int32_t count) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FF9FC0))(this, dest, dest_offset, count);
	}
	template <typename T = int32_t> T WriteSegment(Il2CppArray<uintptr_t>* src, int32_t src_offset, int32_t count) {
		return ((T (*)(FileStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFAFB4))(this, src, src_offset, count);
	}
	template <typename T = void> T FlushBuffer(uintptr_t st) {
		return ((T (*)(FileStream*, uintptr_t))(Il2CppBase() + 0x3FFB7B4))(this, st);
	}
	template <typename T = void> T FlushBuffer_1() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF9BBC))(this);
	}
	template <typename T = void> T FlushBufferIfDirty() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF91E8))(this);
	}
	template <typename T = void> T RefillBuffer() {
		return ((T (*)(FileStream*))(Il2CppBase() + 0x3FF994C))(this);
	}
	template <typename T = int32_t> T ReadData(uintptr_t handle, Il2CppArray<uintptr_t>* buf, int32_t offset, int32_t count) {
		return ((T (*)(FileStream*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FF97C0))(this, handle, buf, offset, count);
	}
	template <typename T = void> T InitBuffer(int32_t size, bool noBuffering) {
		return ((T (*)(FileStream*, int32_t, bool))(Il2CppBase() + 0x3FF7F30))(this, size, noBuffering);
	}
	template <typename T = Il2CppString*> T GetSecureFileName(Il2CppString* filename) {
		return ((T (*)(FileStream*, Il2CppString*))(Il2CppBase() + 0x3FF8E60))(this, filename);
	}
	template <typename T = Il2CppString*> T GetSecureFileName_1(Il2CppString* filename, bool full) {
		return ((T (*)(FileStream*, Il2CppString*, bool))(Il2CppBase() + 0x3FF8D5C))(this, filename, full);
	}

};

}
