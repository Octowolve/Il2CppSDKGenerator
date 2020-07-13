#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.Protocol.Tls {

class Context
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.Protocol.Tls", "Context"));
	}

	template <typename T = uintptr_t> T& securityProtocol() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sessionId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& compressionMethod() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& serverSettings() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& clientSettings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& negotiating() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& read() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& write() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& supportedCiphers() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& lastHandshakeMsg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& handshakeState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& abbreviatedHandshake() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& receivedConnectionEnd() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& sentConnectionEnd() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = bool> T& protocolNegotiated() {
		return *(T*)((uintptr_t)this + 0x3B);
	}
	template <typename T = uint64_t> T& writeSequenceNumber() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& readSequenceNumber() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& clientRandom() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& serverRandom() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& randomCS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& randomSC() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& masterSecret() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& clientWriteKey() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& serverWriteKey() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& clientWriteIV() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& serverWriteIV() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& handshakeMessages() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& random() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& recordProtocol() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = bool> T get_AbbreviatedHandshake() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCCAC))(this);
	}
	template <typename T = void> T set_AbbreviatedHandshake(bool value) {
		return ((T (*)(Context*, bool))(Il2CppBase() + 0x47DCCB4))(this, value);
	}
	template <typename T = bool> T get_ProtocolNegotiated() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCCBC))(this);
	}
	template <typename T = void> T set_ProtocolNegotiated(bool value) {
		return ((T (*)(Context*, bool))(Il2CppBase() + 0x47DCCC4))(this, value);
	}
	template <typename T = uintptr_t> T get_SecurityProtocol() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCCCC))(this);
	}
	template <typename T = void> T set_SecurityProtocol(uintptr_t value) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x47DCCA4))(this, value);
	}
	template <typename T = uintptr_t> T get_SecurityProtocolFlags() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCDA4))(this);
	}
	template <typename T = int16_t> T get_Protocol() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCDAC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SessionId() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DC45C))(this);
	}
	template <typename T = void> T set_SessionId(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCE84))(this, value);
	}
	template <typename T = uintptr_t> T get_CompressionMethod() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCE8C))(this);
	}
	template <typename T = void> T set_CompressionMethod(uintptr_t value) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x47DCE94))(this, value);
	}
	template <typename T = uintptr_t> T get_ServerSettings() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCE9C))(this);
	}
	template <typename T = uintptr_t> T get_ClientSettings() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DA5DC))(this);
	}
	template <typename T = uintptr_t> T get_LastHandshakeMsg() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCEA4))(this);
	}
	template <typename T = void> T set_LastHandshakeMsg(uintptr_t value) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x47DB200))(this, value);
	}
	template <typename T = uintptr_t> T get_HandshakeState() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DB2D8))(this);
	}
	template <typename T = void> T set_HandshakeState(uintptr_t value) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x47DB2E0))(this, value);
	}
	template <typename T = bool> T get_ReceivedConnectionEnd() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCEAC))(this);
	}
	template <typename T = void> T set_ReceivedConnectionEnd(bool value) {
		return ((T (*)(Context*, bool))(Il2CppBase() + 0x47DCEB4))(this, value);
	}
	template <typename T = bool> T get_SentConnectionEnd() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCEBC))(this);
	}
	template <typename T = void> T set_SentConnectionEnd(bool value) {
		return ((T (*)(Context*, bool))(Il2CppBase() + 0x47DCEC4))(this, value);
	}
	template <typename T = uintptr_t> T get_SupportedCiphers() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCECC))(this);
	}
	template <typename T = void> T set_SupportedCiphers(uintptr_t value) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x47DCED4))(this, value);
	}
	template <typename T = uintptr_t> T get_HandshakeMessages() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DB208))(this);
	}
	template <typename T = uint64_t> T get_WriteSequenceNumber() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCEDC))(this);
	}
	template <typename T = void> T set_WriteSequenceNumber(uint64_t value) {
		return ((T (*)(Context*, uint64_t))(Il2CppBase() + 0x47DCEE4))(this, value);
	}
	template <typename T = uint64_t> T get_ReadSequenceNumber() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCEF4))(this);
	}
	template <typename T = void> T set_ReadSequenceNumber(uint64_t value) {
		return ((T (*)(Context*, uint64_t))(Il2CppBase() + 0x47DCEFC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ClientRandom() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCF0C))(this);
	}
	template <typename T = void> T set_ClientRandom(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF14))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ServerRandom() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCF1C))(this);
	}
	template <typename T = void> T set_ServerRandom(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF24))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RandomCS() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCF2C))(this);
	}
	template <typename T = void> T set_RandomCS(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF34))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RandomSC() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCF3C))(this);
	}
	template <typename T = void> T set_RandomSC(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF44))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MasterSecret() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCC94))(this);
	}
	template <typename T = void> T set_MasterSecret(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCC9C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ClientWriteKey() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47D85C4))(this);
	}
	template <typename T = void> T set_ClientWriteKey(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF4C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ServerWriteKey() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47D85D4))(this);
	}
	template <typename T = void> T set_ServerWriteKey(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF54))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ClientWriteIV() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47D85CC))(this);
	}
	template <typename T = void> T set_ClientWriteIV(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ServerWriteIV() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47D85DC))(this);
	}
	template <typename T = void> T set_ServerWriteIV(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Context*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47DCF64))(this, value);
	}
	template <typename T = uintptr_t> T get_RecordProtocol() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCF6C))(this);
	}
	template <typename T = void> T set_RecordProtocol(uintptr_t value) {
		return ((T (*)(Context*, uintptr_t))(Il2CppBase() + 0x47DCF74))(this, value);
	}
	template <typename T = int32_t> T GetUnixTime() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DCF7C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSecureRandomBytes(int32_t count) {
		return ((T (*)(Context*, int32_t))(Il2CppBase() + 0x47D7DB0))(this, count);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DA600))(this);
	}
	template <typename T = void> T ClearKeyInfo() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DD074))(this);
	}
	template <typename T = uintptr_t> T DecodeProtocolCode(int16_t code) {
		return ((T (*)(Context*, int16_t))(Il2CppBase() + 0x47DD214))(this, code);
	}
	template <typename T = void> T ChangeProtocol(int16_t protocol) {
		return ((T (*)(Context*, int16_t))(Il2CppBase() + 0x47DD2E4))(this, protocol);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DD3F4))(this);
	}
	template <typename T = uintptr_t> T get_Negotiating() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47D85E4))(this);
	}
	template <typename T = uintptr_t> T get_Read() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DD4C8))(this);
	}
	template <typename T = uintptr_t> T get_Write() {
		return ((T (*)(Context*))(Il2CppBase() + 0x47DD4D0))(this);
	}
	template <typename T = void> T StartSwitchingSecurityParameters(bool client) {
		return ((T (*)(Context*, bool))(Il2CppBase() + 0x47DD4D8))(this, client);
	}
	template <typename T = void> T EndSwitchingSecurityParameters(bool client) {
		return ((T (*)(Context*, bool))(Il2CppBase() + 0x47DD500))(this, client);
	}

};

}
