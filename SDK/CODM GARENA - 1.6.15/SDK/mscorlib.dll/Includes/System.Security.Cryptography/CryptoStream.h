#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class CryptoStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "CryptoStream"));
	}

	template <typename T = uintptr_t> T& _stream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _currentBlock() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _disposed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _flushedFinalBlock() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = int32_t> T& _partialCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _endOfStream() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _waitingBlock() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _waitingCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _transformedBlock() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _transformedPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _transformedCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _workingBlock() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _workingCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x30385AC))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x3038618))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x303862C))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x3038634))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x3038644))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x30386EC))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(CryptoStream*, int64_t))(Il2CppBase() + 0x3038794))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x303883C))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(CryptoStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x3038B0C))(this, buffer, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(CryptoStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3039704))(this, buffer, offset, count);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x303A190))(this);
	}
	template <typename T = void> T FlushFinalBlock() {
		return ((T (*)(CryptoStream*))(Il2CppBase() + 0x3038884))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(CryptoStream*, int64_t, uintptr_t))(Il2CppBase() + 0x303A1AC))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(CryptoStream*, int64_t))(Il2CppBase() + 0x303A254))(this, value);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(CryptoStream*, bool))(Il2CppBase() + 0x303A2FC))(this, disposing);
	}

};

}
