#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO.Compression {

class DeflateStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.IO.Compression", "DeflateStream"));
	}

	template <typename T = uintptr_t> T& base_stream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& leaveOpen() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& feeder() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& z_stream() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& io_buffer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(DeflateStream*, bool))(Il2CppBase() + 0x42B2864))(this, disposing);
	}
	template <typename T = int32_t> static T UnmanagedRead(uintptr_t buffer, int32_t length, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x42B230C))(0, buffer, length, data);
	}
	template <typename T = int32_t> T UnmanagedRead_1(uintptr_t buffer, int32_t length) {
		return ((T (*)(DeflateStream*, uintptr_t, int32_t))(Il2CppBase() + 0x42B2B94))(this, buffer, length);
	}
	template <typename T = int32_t> static T UnmanagedWrite(uintptr_t buffer, int32_t length, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x42B245C))(0, buffer, length, data);
	}
	template <typename T = int32_t> T UnmanagedWrite_1(uintptr_t buffer, int32_t length) {
		return ((T (*)(DeflateStream*, uintptr_t, int32_t))(Il2CppBase() + 0x42B2D5C))(this, buffer, length);
	}
	template <typename T = int32_t> T ReadInternal(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B2F18))(this, array, offset, count);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* dest, int32_t dest_offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B3010))(this, dest, dest_offset, count);
	}
	template <typename T = void> T WriteInternal(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B3290))(this, array, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* src, int32_t src_offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B337C))(this, src, src_offset, count);
	}
	template <typename T = void> static T CheckResult(int32_t result, Il2CppString* where) {
		return ((T (*)(void *, int32_t, Il2CppString*))(Il2CppBase() + 0x42B2A38))(0, result, where);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x42B35BC))(this);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B36EC))(this, buffer, offset, count, cback, state);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t cback, uintptr_t state) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B3AD4))(this, buffer, offset, count, cback, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t async_result) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x42B3EBC))(this, async_result);
	}
	template <typename T = void> T EndWrite(uintptr_t async_result) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x42B4098))(this, async_result);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(DeflateStream*, int64_t, uintptr_t))(Il2CppBase() + 0x42B4250))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(DeflateStream*, int64_t))(Il2CppBase() + 0x42B42E4))(this, value);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x42B4378))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x42B43CC))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x42B43D4))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x42B4428))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x42B44BC))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(DeflateStream*, int64_t))(Il2CppBase() + 0x42B4550))(this, value);
	}
	template <typename T = uintptr_t> static T CreateZStream(uintptr_t compress, bool gzip, uintptr_t feeder, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B2834))(0, compress, gzip, feeder, data);
	}
	template <typename T = int32_t> static T CloseZStream(uintptr_t stream) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42B2A30))(0, stream);
	}
	template <typename T = int32_t> static T Flush_1(uintptr_t stream) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42B36E4))(0, stream);
	}
	template <typename T = int32_t> static T ReadZStream(uintptr_t stream, uintptr_t buffer, int32_t length) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42B3000))(0, stream, buffer, length);
	}
	template <typename T = int32_t> static T WriteZStream(uintptr_t stream, uintptr_t buffer, int32_t length) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x42B336C))(0, stream, buffer, length);
	}

};

}
