#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class RecordProtocol
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "RecordProtocol"));
	}

	template <typename T = uintptr_t> static T& record_processing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& innerStream() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(RecordProtocol*))(Il2CppBase() + 0x47DB1F8))(this);
	}
	template <typename T = void> T SendRecord(uintptr_t type) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E5C98))(this, type);
	}
	template <typename T = void> T ProcessHandshakeMessage(uintptr_t handMsg) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x0))(this, handMsg);
	}
	template <typename T = void> T ProcessChangeCipherSpec() {
		return ((T (*)(RecordProtocol*))(Il2CppBase() + 0x47E5F64))(this);
	}
	template <typename T = uintptr_t> T GetMessage(uintptr_t type) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E6060))(this, type);
	}
	template <typename T = uintptr_t> T BeginReceiveRecord(uintptr_t record, uintptr_t callback, uintptr_t state) {
		return ((T (*)(RecordProtocol*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47E60F4))(this, record, callback, state);
	}
	template <typename T = void> T InternalReceiveRecordCallback(uintptr_t asyncResult) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E63F8))(this, asyncResult);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EndReceiveRecord(uintptr_t asyncResult) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E6ED0))(this, asyncResult);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReceiveRecord(uintptr_t record) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E7268))(this, record);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadRecordBuffer(int32_t contentType, uintptr_t record) {
		return ((T (*)(RecordProtocol*, int32_t, uintptr_t))(Il2CppBase() + 0x47E6938))(this, contentType, record);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadClientHelloV2(uintptr_t record) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E7290))(this, record);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadStandardRecordBuffer(uintptr_t record) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E7740))(this, record);
	}
	template <typename T = void> T ProcessAlert(uintptr_t alertLevel, uintptr_t alertDesc) {
		return ((T (*)(RecordProtocol*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47E6DEC))(this, alertLevel, alertDesc);
	}
	template <typename T = void> T SendAlert(uintptr_t description) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E7D7C))(this, description);
	}
	template <typename T = void> T SendAlert_1(uintptr_t level, uintptr_t description) {
		return ((T (*)(RecordProtocol*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47DB2E8))(this, level, description);
	}
	template <typename T = void> T SendAlert_2(uintptr_t alert) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E7E18))(this, alert);
	}
	template <typename T = void> T SendChangeCipherSpec() {
		return ((T (*)(RecordProtocol*))(Il2CppBase() + 0x47E7FBC))(this);
	}
	template <typename T = uintptr_t> T BeginSendRecord(uintptr_t handshakeType, uintptr_t callback, uintptr_t state) {
		return ((T (*)(RecordProtocol*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47E5CC8))(this, handshakeType, callback, state);
	}
	template <typename T = void> T InternalSendRecordCallback(uintptr_t ar) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E8324))(this, ar);
	}
	template <typename T = uintptr_t> T BeginSendRecord_1(uintptr_t contentType, Il2CppArray<uintptr_t>* recordData, uintptr_t callback, uintptr_t state) {
		return ((T (*)(RecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47E81F0))(this, contentType, recordData, callback, state);
	}
	template <typename T = void> T EndSendRecord(uintptr_t asyncResult) {
		return ((T (*)(RecordProtocol*, uintptr_t))(Il2CppBase() + 0x47E5E18))(this, asyncResult);
	}
	template <typename T = void> T SendRecord_1(uintptr_t contentType, Il2CppArray<uintptr_t>* recordData) {
		return ((T (*)(RecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E7F84))(this, contentType, recordData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncodeRecord(uintptr_t contentType, Il2CppArray<uintptr_t>* recordData) {
		return ((T (*)(RecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E867C))(this, contentType, recordData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EncodeRecord_1(uintptr_t contentType, Il2CppArray<uintptr_t>* recordData, int32_t offset, int32_t count) {
		return ((T (*)(RecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x47E8860))(this, contentType, recordData, offset, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T encryptRecordFragment(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(RecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E8AA8))(this, contentType, fragment);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T decryptRecordFragment(uintptr_t contentType, Il2CppArray<uintptr_t>* fragment) {
		return ((T (*)(RecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E6ADC))(this, contentType, fragment);
	}
	template <typename T = bool> T Compare(Il2CppArray<uintptr_t>* array1, Il2CppArray<uintptr_t>* array2) {
		return ((T (*)(RecordProtocol*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E8BFC))(this, array1, array2);
	}
	template <typename T = void> T ProcessCipherSpecV2Buffer(uintptr_t protocol, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(RecordProtocol*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E7A8C))(this, protocol, buffer);
	}
	template <typename T = uintptr_t> T MapV2CipherCode(Il2CppString* prefix, int32_t code) {
		return ((T (*)(RecordProtocol*, Il2CppString*, int32_t))(Il2CppBase() + 0x47E8C98))(this, prefix, code);
	}

};

}
