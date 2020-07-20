


class TikTok {

	static int followers = 200000;
	int users = 100000;

	void displayInfo() {

		System.out.println("TikTok Followers ="+followers);
		System.out.println(" Count Of Users ="+users);
	}
	static void govermentDecision() {

		System.out.println(" Remove From PlayStore In India");
	}

}

class UCBrowser {

	static int account_holders = 100000;
        int users = 50000;

        void displayInfo() {

                System.out.println("UCBrowser account_holders ="+account_holders);
                System.out.println(" Count Of Users ="+users);
        }
        static void govermentDecision() {

               System.out.println("Not Allowed To Use In India");
        }
}

class ChinaApps {

	public static void main(String[] args) {

		TikTok t = new TikTok();
		t.displayInfo();
		t.govermentDecision();

		UCBrowser ub = new UCBrowser();
		ub.displayInfo();
		ub.govermentDecision();

	}
}



