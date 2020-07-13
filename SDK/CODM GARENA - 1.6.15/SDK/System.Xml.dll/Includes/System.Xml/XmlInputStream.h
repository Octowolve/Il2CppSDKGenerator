#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlInputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlInputStream"));
	}

	template <typename T = uintptr_t> static T& StrictUTF8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& enc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& bufLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& bufPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& encodingException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T GetStringFromBytes(Il2CppArray<uintptr_t>* bytes, int32_t index, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x37DD3D8))(0, bytes, index, count);
	}
	template <typename T = void> T Initialize(uintptr_t stream) {
		return ((T (*)(XmlInputStream*, uintptr_t))(Il2CppBase() + 0x37DCC08))(this, stream);
	}
	template <typename T = int32_t> T ReadByteSpecial() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD4C0))(this);
	}
	template <typename T = int32_t> T SkipWhitespace() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD664))(this);
	}
	template <typename T = uintptr_t> T get_ActualEncoding() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD6A0))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD6A8))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD6F4))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD6FC))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD704))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD738))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(XmlInputStream*, int64_t))(Il2CppBase() + 0x37DD788))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD808))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD83C))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(XmlInputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x37DD870))(this, buffer, offset, count);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(XmlInputStream*))(Il2CppBase() + 0x37DD94C))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(XmlInputStream*, int64_t, uintptr_t))(Il2CppBase() + 0x37DD9C4))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(XmlInputStream*, int64_t))(Il2CppBase() + 0x37DDB08))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(XmlInputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x37DDB48))(this, buffer, offset, count);
	}

};

}
