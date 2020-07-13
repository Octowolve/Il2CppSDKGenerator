#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ReusableMemoryStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ReusableMemoryStream"));
	}

	template <typename T = bool> T& canWrite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& allowGetBuffer() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = int32_t> T& capacity() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& internalBuffer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& initialIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& expandable() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& streamClosed() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& stream() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_InUse() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T ResetBuffer(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(ReusableMemoryStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E01978))(this, buffer, index, count);
	}
	template <typename T = uintptr_t> static T GetStream(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E01994))(0, buffer, index, count);
	}
	template <typename T = void> T InternalConstructor(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count, bool writable, bool publicallyVisible) {
		return ((T (*)(ReusableMemoryStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x1E01600))(this, buffer, index, count, writable, publicallyVisible);
	}
	template <typename T = void> T CheckIfClosedThrowDisposed() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E01B70))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E01C28))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E01C3C))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E01C50))(this);
	}
	template <typename T = int32_t> T get_Capacity() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E01C74))(this);
	}
	template <typename T = void> T set_Capacity(int32_t value) {
		return ((T (*)(ReusableMemoryStream*, int32_t))(Il2CppBase() + 0x1E01C94))(this, value);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E0208C))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E020B0))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(ReusableMemoryStream*, int64_t))(Il2CppBase() + 0x1E020D4))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E02204))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E02218))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBuffer() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E0221C))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(ReusableMemoryStream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x1E022C4))(this, buffer, offset, count);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E024A4))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t loc) {
		return ((T (*)(ReusableMemoryStream*, int64_t, uintptr_t))(Il2CppBase() + 0x1E02508))(this, offset, loc);
	}
	template <typename T = int32_t> T CalculateNewCapacity(int32_t minimum) {
		return ((T (*)(ReusableMemoryStream*, int32_t))(Il2CppBase() + 0x1E02768))(this, minimum);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(ReusableMemoryStream*, int64_t))(Il2CppBase() + 0x1E02784))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(ReusableMemoryStream*))(Il2CppBase() + 0x1E029A4))(this);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ReusableMemoryStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1E02A78))(this, buffer, offset, count);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(ReusableMemoryStream*, unsigned char))(Il2CppBase() + 0x1E02CB4))(this, value);
	}
	template <typename T = void> T WriteTo(uintptr_t stream) {
		return ((T (*)(ReusableMemoryStream*, uintptr_t))(Il2CppBase() + 0x1E02E00))(this, stream);
	}

};

}
