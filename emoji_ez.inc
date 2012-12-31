<?php

/**
 * EZ用絵文字取得クラス
 *
 * @package magicweapon
 * @link http://www.grid-works-guild.net/MagicWeapon/ MagicWeapon
 * @access  public
 * @author  Michiaki Wuzawa <wuzawa@m-fr.net>
 * @create  $LastChangedDate$
 * @version $Revision$
 **/

require_once('emoji_base.inc');

class emoji_ez extends emoji_base {

public function __construct()
{
  //
  parent::__construct();
  //$this->init();
}

//
public function init()
{
  //
  parent::init();

  //
  $this->set_emoji(
array(
        '1' => '&#xF660;',
        '2' => '&#xF665;',
        '3' => '&#xF664;',
        '4' => '&#xF65D;',
        '5' => '&#xF65F;',
        '6' => '&#xF641;',
        '7' => '&#xF7B5;',
        '8' => '&#xF3BC;',
        '9' => '&#xF667;',
        '10' => '&#xF668;',
        '11' => '&#xF669;',
        '12' => '&#xF66A;',
        '13' => '&#xF66B;',
        '14' => '&#xF66C;',
        '15' => '&#xF66D;',
        '16' => '&#xF66E;',
        '17' => '&#xF66F;',
        '18' => '&#xF670;',
        '19' => '&#xF671;',
        '20' => '&#xF672;',
        '21' => '',
        '22' => '&#xF693;',
        '23' => '&#xF7B6;',
        '24' => '&#xF690;',
        '25' => '&#xF68F;',
        '26' => '&#xF380;',
        '27' => '&#xF7B7;',
        '28' => '&#xF692;',
        '29' => '&#xF7B8;',
        '30' => '&#xF68E;',
        '31' => '&#xF7EC;',
        '32' => '&#xF689;',
        '33' => '&#xF68A;',
        '34' => '&#xF68A;',
        '35' => '&#xF688;',
        '36' => '&#xF355;',
        '37' => '&#xF68C;',
        '38' => '&#xF684;',
        '39' => '&#xF686;',
        '40' => '&#xF351;',
        '41' => '&#xF352;',
        '42' => '&#xF683;',
        '43' => '&#xF67B;',
        '44' => '&#xF354;',
        '45' => '&#xF67C;',
        '46' => '&#xF78E;',
        '47' => '&#xF67E;',
        '48' => '&#xF642;',
        '49' => '&#xF67D;',
        '50' => '&#xF685;',
        '51' => '&#xF7B4;',
        '52' => '&#xF69B;',
        '53' => '&#xF69C;',
        '54' => '&#xF6AF;',
        '55' => '&#xF6F3;',
        '56' => '&#xF6EF;',
        '57' => '&#xF6DC;',
        '58' => '&#xF6F0;',
        '59' => '&#xF771;',
        '60' => '',
        '61' => '&#xF6E1;',
        '62' => '&#xF7B9;',
        '63' => '&#xF3C9;',
        '64' => '&#xF7BB;',
        '65' => '&#xF676;',
        '66' => '&#xF655;',
        '67' => '&#xF656;',
        '68' => '&#xF6EE;',
        '69' => '&#xF674;',
        '70' => '&#xF677;',
        '71' => '&#xF7BC;',
        '72' => '&#xF6A8;',
        '73' => '&#xF7BD;',
        '74' => '&#xF7B3;',
        '75' => '&#xF7A5;',
        '76' => '&#xF365;',
        '77' => '&#xF6DB;',
        '78' => '&#xF69F;',
        '79' => '&#xF6E5;',
        '80' => '&#xF378;',
        '81' => '&#xF7BE;',
        '82' => '&#xF7BF;',
        '83' => '&#xF7C0;',
        '84' => '&#xF7C1;',
        '85' => '&#xF7C2;',
        '86' => '&#xF488;',
        '87' => '&#xF7C3;',
        '88' => '&#xF7C4;',
        '89' => '&#xF769;',
        '90' => '&#xF768;',
        '91' => '&#xF3EB;',
        '92' => '&#xF3EC;',
        '93' => '&#xF6D7;',
        '94' => '&#xF657;',
        '95' => '&#xF7C5;',
        '96' => '&#xF7C6;',
        '97' => '&#xF7C7;',
        '98' => '&#xF65E;',
	'99'  => "\x81\x9b", // ○
        '100' => '&#xF6BA;',
        '101' => '&#xF6B4;',
        '102' => '&#xF68D;',
        '103' => '&#xF6A2;',
        '104' => '&#xF772;',
        '105' => '&#xF7DF;',
        '106' => '&#xF466;',
        '107' => '&#xF6F9;',
	'108' => "[i\xd3\xb0\xc4\xde]", // [iモード]
	'109' => "[i\xd3\xb0\xc4\xde]", // [iモード]
        '110' => '&#xF6FA;',
	'111' => "[\xc4\xde\xba\xd3]", // [ドコモ]
	'112' => "[\xc4\xde\xba\xd3\xce\xdf\xb2\xdd\xc4]", // [ドコモポイント]
        '113' => '&#xF79A;',
        '114' => '&#xF795;',
        '115' => '&#xF35B;',
        '116' => '&#xF6F2;',
        '117' => '&#xF779;',
        '118' => '&#xF7C8;',
        '119' => '&#xF6F1;',
        '120' => '&#xF7E5;',
        '121' => '&#xF3ED;',
	'122' => "[\xcc\xd8\xb0\xc0\xde\xb2\xd4\xd9]", // [フリーダイヤル]
        '123' => '&#xF489;',
        '124' => '&#xF748;',
        '125' => '&#xF6FB;',
        '126' => '&#xF6FC;',
        '127' => '&#xF740;',
        '128' => '&#xF741;',
        '129' => '&#xF742;',
        '130' => '&#xF743;',
        '131' => '&#xF744;',
        '132' => '&#xF745;',
        '133' => '&#xF746;',
        '134' => '&#xF7C9;',
        '135' => '&#xF7CA;',
        '136' => '&#xF7B2;',
        '137' => '&#xF479;',
        '138' => '&#xF64F;',
        '139' => '&#xF650;',
        '140' => '&#xF649;',
        '141' => '&#xF64A;',
        '142' => '&#xF394;',
        '143' => '&#xF397;',
        '144' => '&#xF7CB;',
        '145' => '&#xF3EE;',
        '146' => '&#xF7EE;',
        '147' => '&#xF695;',
        '148' => '',
        '149' => '&#xF6C4;',
        '150' => '&#xF37E;',
        '151' => '&#xF64E;',
        '152' => '&#xF6BE;',
        '153' => '&#xF6CC;',
        '154' => '&#xF652;',
        '155' => '&#xF6DE;',
        '156' => '&#xF3EF;',
        '157' => '&#xF64D;',
        '158' => '&#xF65A;',
        '159' => '&#xF3F0;',
        '160' => '&#xF3F1;',
        '161' => '&#xF7CD;',
        '162' => '&#xF7CE;',
        '163' => '&#xF6BF;',
        '164' => '&#xF6CD;',
        '165' => '',
        '166' => '&#xF3F2;',
        '167' => '&#xF697;',
	'168' => "[\x82\xd3\x82\xad\x82\xeb]", // [ふくろ]
        '169' => '&#xF7DA;',
        '170' => '',
	'171' => "[\x82\xa2\x82\xb7]", // [いす]
        '172' => '&#xF3C5;',
	'173' => '[SOON]',
	'174' => '[ON]',
	'175' => '[end]',
        '176' => '&#xF7B1;',
	'e1'  => "[i\xb1\xcc\xdf\xd8]", // [iアプリ]
	'e2'  => "[i\xb1\xcc\xdf\xd8]", // [iアプリ]
        'e3' => '&#xF7E6;',
        'e4' => '&#xF6DD;',
        'e5' => '&#xF6E2;',
        'e6' => '&#xF47B;',
        'e7' => '&#xF691;',
        'e8' => '&#xF6EB;',
	'e9'  => "[\xc4\xde\xb1]", // [ドア]
	'e01'  => "[i\xb1\xcc\xdf\xd8]", // [iアプリ]
	'e02'  => "[i\xb1\xcc\xdf\xd8]", // [iアプリ]
        'e03' => '&#xF7E6;',
        'e04' => '&#xF6DD;',
        'e05' => '&#xF6E2;',
        'e06' => '&#xF47B;',
        'e07' => '&#xF691;',
        'e08' => '&#xF6EB;',
	'e09'  => "[\xc4\xde\xb1]", // [ドア]
        'e10' => '&#xF6A0;',
        'e11' => '&#xF7E8;',
        'e12' => '&#xF47C;',
        'e13' => '&#xF7A4;',
        'e14' => '&#xF679;',
        'e15' => '&#xF7F9;',
        'e16' => '&#xF6ED;',
        'e17' => '&#xF654;',
        'e18' => '&#xF687;',
        'e19' => '&#xF382;',
        'e20' => '&#xF797;',
        'e21' => '&#xF394;',
        'e22' => '&#xF399;',
        'e23' => '&#xF649;&#xF7CE;',
        'e24' => '&#xF7F6;',
        'e25' => '&#xF461;',
        'e26' => '&#xF39D;',
        'e27' => '&#xF7F4;',
        'e28' => '&#xF6D2;',
        'e29' => '&#xF6C0;',
        'e30' => '&#xF7F3;',
        'e31' => '&#xF399;',
        'e32' => '&#xF396;',
        'e33' => '&#xF393;',
        'e34' => '&#xF64B;',
        'e35' => '&#xF46D;',
	'e36' => '[NG]',
        'e37' => '&#xF678;',
        'e38' => '&#xF774;',
        'e39' => '&#xF76A;',
        'e40' => '&#xF643;',
        'e41' => '&#xF6CA;',
        'e42' => '&#xF47D;',
        'e43' => '&#xF775;',
        'e44' => '&#xF659;',
	'e45' => "[\x8b\xd6]", // [禁]
        'e46' => '&#xF35D;',
	'e47' => "[\x8d\x87]", // [合]
        'e48' => '&#xF35C;',
        'e49' => '&#xF47E;',
        'e50' => '&#xF480;',
        'e51' => '&#xF353;',
        'e52' => '&#xF481;',
        'e53' => '&#xF7ED;',
        'e54' => '&#xF6EC;',
        'e55' => '&#xF6AB;',
        'e56' => '&#xF6BD;',
        'e57' => '&#xF3F6;',
        'e58' => '&#xF38D;',
        'e59' => '&#xF482;',
        'e60' => '&#xF6A7;',
        'e61' => '&#xF6A3;',
        'e62' => '&#xF6AE;',
        'e63' => '&#xF6A9;',
        'e64' => '&#xF36A;',
        'e65' => '&#xF7D1;',
        'e66' => '&#xF383;',
        'e67' => '&#xF483;',
        'e68' => '&#xF6B9;',
        'e69' => '&#xF6B5;',
        'e70' => '&#xF672;',
        'e71' => '&#xF3A1;',
        'e72' => '&#xF485;',
        'e73' => '&#xF6B1;',
        'e74' => '&#xF6B7;',
        'e75' => '&#xF69A;',
        'e76' => '&#xF7F5;',
));
}

} // end of class
